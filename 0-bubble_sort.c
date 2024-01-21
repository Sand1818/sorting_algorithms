#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: integer array being sorted
 * @size: array size
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t jel, s;
	int san;

	if (size < 2)
	{
		return;
	}


	for (s = 0; s <= size; s++)
	{
		if (array[s + 1])
		{
			for (jel = 0; jel <= size; jel++)
			{
				if (array[jel + 1])
				{
					if (array[jel] > array[jel + 1])
					{
						san = array[jel];
						array[jel] = array[jel + 1];
						array[jel + 1] = san;
						print_array(array, size);
					}
				}
			}
		}
	}
}
