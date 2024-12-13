#include "sort.h"

/**
 * swap - swapt two elements
 * @a: first element to swap
 * @b: seconde element to swap
 */
void swap(size_t *a, size_t *b)
{
	size_t t = *a;
	size_t *a = *b;
	*b = t;
}



/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
}
