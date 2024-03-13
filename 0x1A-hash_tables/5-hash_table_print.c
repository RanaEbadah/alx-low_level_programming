#include "hash_tables.h"

/**
* hash_table_print - prints a hash table.
* @ht: the hash table
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int comma = 0;

	if (ht == NULL)
	return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
			printf(", ");

			/* print the list*/
			temp = ht->array[i];

			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
			comma = 1;
		}
	}
	printf("}\n");
}
