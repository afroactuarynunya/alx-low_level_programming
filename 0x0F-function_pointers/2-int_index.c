#include <stddef.h>
/**
 * int_index - check.
 * @array: pointer to character.
 * @size: integer.
 * @cmp: pointer.
 * Return: Always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c;

	if (array && size > 0 && cmp)
	{
		c = 0;
		for (i = 0; i < size; i++)
		{
			c = cmp(array[i]);
			if (c == 1)
				return (i);
		}
		return (-1);
	}
	return (-1);


}
