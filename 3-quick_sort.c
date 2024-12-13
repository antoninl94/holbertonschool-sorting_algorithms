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

/**
 * partition - function to split array
 * @array: the array to split
 * @low: index to the low of the array
 * @high: index to the high part of the array
 * Return: i + 1
 */
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
	return (i + 1);
}

/**
 * quick_sort - sort an array with quick sort algorithm
 * @array: the array to sort
 * @size: size of the array;
 */
void quick_sort(int *array, size_t size)
