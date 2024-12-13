#include "sort.h"

/**
 * swap - swapt two elements
 * @a: first element to swap
 * @b: seconde element to swap
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *array, size_t low, size_t high)
{
	int pivot = array[high];
	size_t i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return i + 1;
}
