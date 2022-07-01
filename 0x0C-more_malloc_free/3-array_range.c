#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - get len, malloc * len
 * loop size of len to insert min++ into new arr
 * @min: min input
 * @max: max input
 * Return: pointer to new arr of ints
 */
int *array_range(int min, int max)
{
	int *a;
	int i, j;

	if (min > max)
		return (NULL);

	for (j = 0; j < (max - min); j++)
		;

	a = malloc(sizeof(int) * (j + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		a[i] = min++;
	}

	return (a);
}
