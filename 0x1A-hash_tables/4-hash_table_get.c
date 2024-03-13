#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key.
* @ht: the hash table
* @key: the key
* Return: the value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int keyIndex;
	hash_node_t *item;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	keyIndex = key_index((const unsigned char *)key, ht->size);
	if (keyIndex >= ht->size)
	return (NULL);

	item = ht->array[keyIndex];

	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		return (item->value);
		if (item->next != NULL)
		{
			temp = item;
			while (temp->next != NULL)
			{
				if (strcmp(temp->key, key) == 0)
				return (temp->value);

				temp = temp->next;
			}
		}
	}

	return (NULL);
}
