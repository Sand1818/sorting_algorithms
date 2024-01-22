#include "sort.h"

/**
 * selection_sort -  sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to be sorted
 * @size: array size
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int min, inter;

	if (!array || size < 2)
		return;

	a = 0;
	while (a < size - 1)
	{
		min = a;
		b = a + 1;
		while (b < size)
		{
			if (array[b] < array[min])
				min = b;
			b++;
		}
		if (min != (int)a)
		{
			inter = array[a];
			array[a] = array[min];
			array[min] = inter;
			print_array(array, size);
		}
		a++;
	}
}
