#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 * Return: 0
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash_d = NULL;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		hash_d = ht->array[i];
		if (hash_d)
		{
			free_list(hash_d);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - function that frees memory
 * @head: memory position at the head of the list
 * Return: 0
 */

void free_list(hash_node_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head->value);
	free(head->key);
	free(head);
}
