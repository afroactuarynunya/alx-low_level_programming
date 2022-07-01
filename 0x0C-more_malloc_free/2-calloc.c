#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - print 0s into 2D grid
 * @nmemb: array num
 * @size: size of ea array element
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;

	return (a);
}
