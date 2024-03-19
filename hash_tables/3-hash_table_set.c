#include "hash_tables.h"

/**
*hash_table_set - adds an element to hash table
*
*@ht: hash table to add or update the key/value
*
*@key: key, may not be void string
*
*@value: the value of key
*
*Return: 1 if success , 0 if error
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *present_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	for (present_node = ht->array[index]; present_node != NULL; present_node =  present_node->next)
	{
		if (strcmp(present_node->key, key) == 0)
		{
			free(present_node->value);
			present_node->value = strdup(value);
			if (present_node->value == NULL)
			{
				return (0);
			}
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		if (new_node->key)
		{
			free(new_node->key);
		}
		if (new_node->value)
		{
			free(new_node->value);
		}
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
