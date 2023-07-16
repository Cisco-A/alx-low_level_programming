#include "search_algos.h"
/**
 * linear_search - search for value in an array of integers
 * @array: array of integers to be searched
 * @size: size of array
 * @value: value being searched for
 * Return: array index or -1
*/

int linear_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = %d\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}

	return (-1);
}
