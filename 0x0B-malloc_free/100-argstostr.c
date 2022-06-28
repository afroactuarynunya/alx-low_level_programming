#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *out;
	int c, i, j, k;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	out = malloc((c + 1) * sizeof(char));

	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			out[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			out[k] = av[i][j];
	}
	out[k] = '\0';

	return (out);
}
