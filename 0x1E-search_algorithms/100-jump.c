#include "search_algos.h"
#include <math.h>
/**
* jump_search -  searches for a value in an array of integers
* using the Jump search algorithm
* @array: pointer to the first element of the array to search in
* @value:  value to search for
* @size: number of elements in array
* Return: the first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	int jump_step = (int)sqrt(size);
	unsigned int prev = 0, i;

	if (array == NULL)
		return (-1);
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (prev + jump_step >= size)
			break;
		if (array[prev + jump_step] >= value)
			break;
		prev += jump_step;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, prev + jump_step);

	for (i = prev; i < size && i <= prev + jump_step; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
