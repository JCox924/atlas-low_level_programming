#include "hash_tables.h"

/**
*hash_table_print - prints hash table
*
*@ht: hash table
*
*Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *comma = "";

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			for (node = ht->array[i]; node != NULL; node = node->next)
			{
				printf("%s'%s': '%s'", comma, node->key, node->value);
				comma = ", ";
			}
		}
	}
	printf("}\n");
}
