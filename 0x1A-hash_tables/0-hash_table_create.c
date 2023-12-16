#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 *
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 * or NULL If something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	/* Allocate memory for the hash_table_t structure */
	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		/* Handle memory allocation failure */
		return (NULL);
	}

	/* Allocate memory for the array of pointers */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		/* Handle memory allocation failure */
		/* Free the previously allocated memory */
		free(hash_table);
		return (NULL);
	}
	/* Initialize the size attribute */
	hash_table->size = size;

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; ++i)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}
