#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: the array to sort
 * @size: size of the array to sort
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp, min;

	i = 0;

	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
			j++;
		}
		tmp = array[min];
		array[min] = array[i];
		array[i] = tmp;
		if (i != min)
			print_array(array, size);
		i++;
	}
}
