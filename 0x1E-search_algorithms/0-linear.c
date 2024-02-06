#include "search_algos.h"
/**
* linear_search -  searches for a value in an array of integers
* using the Linear search algorithm
* @array: pointer to the first element of the array to search in
* @value:  value to search for
* @size: number of elements in array
* Return: the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	long unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
