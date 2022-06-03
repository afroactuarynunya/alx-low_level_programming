#include <stdio.h>

/**
 * main -Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, e;

	for (i = '0'; i <= '9'; i++)
	{
		for (e = '0'; e <= '9'; e++)
		{
			if (i < e)
			{
				putchar(i);
				putchar(e);

				if (i != '8' || (i == '8' && i != '9'))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n')
	return (0);
}
