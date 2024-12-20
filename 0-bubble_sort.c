#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array to sort
 * @size: the size of the array to sort
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp, swapflag;

	if (array == NULL || size < 2)
		return;
	for (j = 0; j < size - 1; j++)
	{
		swapflag = 0;
		for (i = 0; i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				swapflag = 1;
			}
		}
		if (swapflag == 0)
			return;
	}
}
