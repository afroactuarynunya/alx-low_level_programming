#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - Check.
 * @array: pointer to character.
 * @size: pointer to function.
 * @action: pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == '\0' || action == NULL)
		return;
	for (i = 0; i <= size - 1; i++)
		action(array[i]);
}
