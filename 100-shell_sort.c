#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using
 * Shell sort algorithm, using the Knuth sequence
 * @array: array
 * @size: array size
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	size_t i, a;
	size_t san = 1;
	int jel;

	if (size < 2)
		return;

	while (san < size / 3)
		san = san * 3 + 1;

	while (san >= 1)
	{
		for (i = san; i < size; i++)
		{
			jel = array[i];
			for (a = i; a >= san && array[a - san] > jel; a -= san)
			{
				array[a] = array[a - san];
			}
			array[a] = jel;
		}
		print_array(array, size);
		san = san / 3;
	}
}
