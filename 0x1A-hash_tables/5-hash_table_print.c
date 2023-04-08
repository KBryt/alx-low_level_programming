#include "hash_tables.h"

/**
* hash_table_print - print a hash table.
* @ht: hash table
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int n, move = 0;

	if (!ht)
		return;


	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		node = ht->array[n];
		if (move == 1 && node != NULL)
			printf(", ");
		if (node)
		{
			if (!(node->next))
			{
				printf("'%s': '%s'", node->key, node->value);
				move = 1;
				continue;
			}
			while (node)
			{
				move = 1;
				printf("'%s': '%s'", node->key, node->value);
				if (node->next)
					printf(", ");
				node = node->next;
			}
		}
	}
	printf("}\n");
}
