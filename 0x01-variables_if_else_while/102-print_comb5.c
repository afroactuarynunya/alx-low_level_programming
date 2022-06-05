#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int c, i, j, k;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (j = 48; j <= 57; j++)
			{
				for (k = 48; k <= 57; k++)
				{
					if (((j + k) > (c + i) && j >= c) || c < j)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(j);
						putchar(k);
					if (c + i + j + k == 227 && c == 57)
					{
						break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
