#include "hash_tables.h"


/**
*key_index - gives index of key
*
*@key: key specifier
*
*@size: size of array of hash table
*
*Return: index key/value pair in array of hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
