#include "hash_tables.h"

/**
* str_copy - create single copy of a given string.
* @s: The string to copy.
*
* Return: A pointer to the created string and otherwise NULL.
*/

char *str_copy(const char *s)
{
	int k, len;
	char *s_c = NULL;

	if (s != NULL)
	{
		len = strlen(s);
		s_c = malloc(sizeof(char) * (len + 1));
		if (s_c != NULL)
		{
			for (k = 0; k < len; k++)
				s_c[k] = s[k];
			s_c[k] = '\0';
		}
	}
	return (s_c);
}

/**
* hash_table_set - adds an element to a given hash table.
* @ht: the hash table that will contain the element.
* @key: the key of the element to add.
* @value: the value of the element to add.
*
* Return: 1 if the addition was successful, otherwise 0.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx;
	hash_node_t *tmp = NULL, *new_node = NULL;

	if ((ht != NULL) && (ht->array != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		idx = key_index((unsigned char *)key, ht->size);
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = str_copy(value);
				return (1);
			}
			tmp = tmp->next;
		}
		tmp = ht->array[idx];
		new_node = malloc(sizeof(hash_node_t));
		if (new_node != NULL)
		{
			new_node->key = str_copy(key);
			new_node->value = str_copy(value);
			new_node->next = tmp;
			ht->array[idx] = new_node;
			return (1);
		}
	}
	return (0);
}
