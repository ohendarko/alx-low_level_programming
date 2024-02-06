#include "search_algos.h"
/**
* binary_search -  searches for a value in an array of integers
* using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @value:  value to search for
* @size: number of elements in array
* Return: the index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid, i;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
