#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, k, l;

	i = 48;
	k = 48;
	l = 48;

	while (k < 58)
	{
		i = 48;
		while (i < 58)
		{
			l = 48;
			while (l < 58)
			{
				if (k != i && k != l && i != l && k < i && i < l)
				{
					putchar(k);
					putchar(i);
					putchar(l);
					if (i == 56 && k == 55 && l == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				l++;
			}
			i++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
