#include "hash_tables.h"

/**
* main - check the code for
*
* Return: ALways EXIT_SUCCESS.
*/

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}
