#include "hash_tables.h"

/**
* key_index - Generate the index for a key in a hash table.
* @key: key in the hash table.
* @size: size of the hash table.
*
* Return: The index corresponding to the given key.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
