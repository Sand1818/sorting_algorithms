#include "sort.h"

/**
 * quick_sort - sort using quick sort algorithm
 * @array: array to sort
 * @size: array size
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;

	if (size < 2 || !array)
		return;
	recursive_sort(array, low, high, size);
}

/**
 * recursive_sort - sort using recursive sort algorithm
 * @array: array to sort
 * @size: array size
 * @low: array start index
 * @high: array send index
 * Return: void
 */

void recursive_sort(int *array, int low, int high, size_t size)
{
	int san = 0;

	if (low < high)
	{
		san = partition(array, low, high, size);
		recursive_sort(array, low, san - 1, size);
		recursive_sort(array, san + 1, high, size);
	}
}

/**
 * partition - sort using recursive sort algorithm
 * @array: array to sort
 * @size: array size
 * @low: array start index
 * @high: array send index
 * Return: low
 */

int partition(int *array, int low, int high, size_t size)
{
	int centr = array[high], i = low;
	int b = 0;
	int sap = 0;

	for (b = low; b <= high; b++)
	{
		if (array[b] < centr)
		{
			sap = array[b];
			array[b] = array[i];
			array[i] = sap;
			if (i != b)
				print_array(array, size);
			i++;
		}
	}
	sap = array[i];
	array[i] = array[high];
	array[high] = sap;
	if (array[high] != centr)
		print_array(array, size);
	return (i);
}
