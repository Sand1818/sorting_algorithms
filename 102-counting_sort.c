#include "sort.h"

/**
 * counting_sort - sorts an array in ascending order with
 * Counting sort algorithm
 * @array: array to be sorted
 * @size: array size
 * Return: void
*/

void counting_sort(int *array, size_t size)
{
	int gcwele = 0;
	int i = 1, *bala = NULL, *array_t = NULL;

	if (!array || size < 2)
		return;
	gcwele = array[0];
	while (i < (int) size)
	{
		if (array[i] > gcwele)
			gcwele = array[i];
		i++;
	}
	array_t = malloc(sizeof(int) * size);
	if (!array_t)
		return;
	bala = malloc(sizeof(int) * gcwele + 1);
	if (!bala)
	{
		free(array_t);
		return;
	}

	for (i = 0; i <= gcwele; ++i)
		bala[i] = 0;
	for (i = 0; i < (int) size; ++i)
		bala[array[i]]++;
	for (i = 1; i <= gcwele; ++i)
		bala[i] = bala[i - 1] + bala[i];
	print_array(bala, gcwele + 1);
	for (i = 0; i < (int) size; ++i)
	{
		array_t[bala[array[i]] - 1] = array[i];
		bala[array[i]]--;
	}
	for (i = 0; i < (int) size; ++i)
		array[i] = array_t[i];

	free(bala);
	free(array_t);
	bala = array_t = NULL;
}
