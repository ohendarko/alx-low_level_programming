#include "hash_tables.h"
/**
* key_index - Hash function implementing the djb2 algorithm
* @key: key
* @size: size
* Return: hash
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
