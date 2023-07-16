#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using binary search algorithm.
 * @array: array to  be searched
 * @size: size of array to be searched
 * @value: value being searched for
 * Return: array index or -1
*/

int binary_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t new_size = size;

		while (new_size > 1)
		{
			int new_array[] = {};

			printf("Searching in array: ");

			for (int j = 0; j < new_size; j++)
			{
				new_array[j] = array[j];
				printf("%d, ", array[j]);
			}

			printf("\n");

			for (int i = 0; i < new_size; i++)
			{
				if (array[i] == value)
				{
					return (i);
				}
			}

			new_size = new_size / 2;
		}
	}

	return (-1);
}
