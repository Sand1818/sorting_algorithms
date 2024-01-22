#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: integer array being sorted
 * @size: array size
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int i = 0;
	int san = 0;
	int max = 0;
	int jel = 1;

	if (!array || size < 2)
		return;

	max = size - 1;

	for (; i < max; ++i)
	{
		if (array[i] > array[i + 1])
		{
			san = array[i];
			array[i] = array[i + 1];
			array[i + 1] = san;
			jel = 1;
			print_array(array, size);
		}

		if (jel == 1 && i == max - 1)
			i = -1, jel = 0, --max;
	}
}
