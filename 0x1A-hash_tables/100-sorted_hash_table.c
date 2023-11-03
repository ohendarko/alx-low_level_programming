#include "hash_tables.h"
/**
* insert_sorted - Inserts a new node into a sorted linked list
* @ht: The sorted hash table containing the linked list
* @new_node: The new node to insert
* Return: 1 on success, 0 on failure
*/
int insert_sorted(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current, *prev;
	int cmp;

	if (ht == NULL || new_node == NULL)
		return (0);
	current = ht->shead;
	prev = NULL;
	while (current)
	{
		cmp = strcmp(current->key, new_node->key);
		if (cmp == 0)
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		else if (cmp > 0)
		{
			new_node->snext = current;
			new_node->sprev = prev;
			if (prev)
				prev->snext = new_node;
			else
				ht->shead = new_node;
			current->sprev = new_node;
			return (1);
		}
		prev = current;
		current = current->snext;
	}
	if (prev)
		prev->snext = new_node;
	else
		ht->shead = new_node;
	new_node->sprev = prev;
	new_node->snext = NULL;
	if (ht->stail)
		ht->stail->snext = new_node;
	ht->stail = new_node;
	return (1);
}
/**
 * shash_table_create - Creates a new sorted hash table
 * @size: The size of the array for the hash table
 * Return: A pointer to the newly created sorted hash table,
 * or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
* shash_table_set - Adds or updates an element in
* the sorted hash table
* @ht: The sorted hash table to add the element to
* @key: The key string
* @value: The value string to associate with the key
* Return: 1 on success, 0 on failure
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (insert_sorted(ht, new_node));
}
/**
* shash_table_get - Retrieves the value associated
* with a key in the sorted hash table
* @ht: The sorted hash table to search in
* @key: The key string to search for
* Return: The value associated with the key, or NULL if not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
/**
* shash_table_print - Prints the sorted hash table
* using the sorted linked list
* @ht: The sorted hash table to print
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	current = ht->shead;
	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints the sorted hash table in reverse
 * using the sorted linked list
 * @ht: The sorted hash table to print in reverse
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	current = ht->stail;
	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}
/**
* shash_table_delete - Deletes a sorted hash table and its elements
* @ht: The sorted hash table to delete
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	if (ht == NULL)
		return;

	current = ht->shead;

	while (current)
	{
		temp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}
	free(ht->array);
	free(ht);
}
