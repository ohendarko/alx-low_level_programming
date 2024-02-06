#include "search_algos.h"
#include <math.h>
/**
* jump_search -  searches for a value in an array of integers
* using the Jump search algorithm
* @array: pointer to the first element of the array to search in
* @value:  value to search for
* @size: number of elements in array
* Return: the index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	int jump_step = (int)sqrt(size);
	unsigned int prev = 0, i;
	unsigned int curr = jump_step;

	if (array == NULL || size == 0)
		return (-1);

	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%d]: %d\n", curr, array[curr]);
		prev = curr;
		curr += jump_step;
	}
	for (i = prev; i < curr && i < size; i++)
	{
		printf("Value checked array[%d]: %d\n", curr, array[curr]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
