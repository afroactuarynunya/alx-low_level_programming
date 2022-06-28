#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = (char *)malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		a[j] = str[j];

	return (a);
}
