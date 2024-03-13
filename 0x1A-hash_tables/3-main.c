#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "test1");
	hash_table_set(ht, "mentioner", "test2");
	hash_table_set(ht, "vivency", "test2");
	hash_table_set(ht, "dram", "test2");
	hash_table_set(ht, "urites", "test2");
	hash_table_set(ht, "redescribed", "test2");
	hash_table_set(ht, "subgenera", "test2");
	hash_table_set(ht, "stylist", "test2");
	hash_table_set(ht, "serafins", "test2");
	hash_table_set(ht, "depravement", "test2");
	hash_table_set(ht, "neurospora", "test2");
	hash_table_set(ht, "heliotropes", "test2");

	return (EXIT_SUCCESS);
}
