#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table.
* @ht: the hash table
* @key: the key
* @value: the value
* Return: 1 if success, 0 if failed
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hashNodeItem;
	unsigned long int index;
	const char *value_copy;
	const char *key_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);

	value_copy = strdup(value);
	key_copy = strdup(key);
	if ((value_copy == NULL) || key_copy == NULL)
	return (0);

	hashNodeItem = createItem(key_copy, value_copy);

	if (hashNodeItem  == NULL)
	return (0);

	index = key_index((const unsigned char *)key_copy, ht->size);

	if (ht->array[index] == NULL)
	{
		/* the index is free */
		ht->array[index] = hashNodeItem;
	}
	else
	{
		/*collision happend*/
		hashNodeItem->next = ht->array[index];
		ht->array[index] = hashNodeItem;
	}

	return (1);

}


/**
* createItem - create an item to be inserted in the hashTable
* @key: the key
* @value: the value
* Return: pointer to the item
*/
hash_node_t *createItem(const char *key, const char *value)
{
	hash_node_t *HashNodeItem = malloc(sizeof(hash_node_t));

	if (HashNodeItem != NULL)
	{
		HashNodeItem->key = (char *)key;
		HashNodeItem->value = (char *)value;
		HashNodeItem->next = NULL;
	}

	return (HashNodeItem);
}
