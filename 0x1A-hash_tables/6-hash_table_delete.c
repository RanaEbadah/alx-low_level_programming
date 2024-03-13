#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table.
* @ht: the hash table
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;
	hash_table_t *head = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free_item(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}

/**
* free_item - deletes a hash item.
* @item: the hash item
* Return: void
*/
void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}
