#include <stdio.h>
/**
 *
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{

		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar((a % 10) + '0');
				putchar((a % 10) + '0');
				putchar((a % 10) + '0');

				if (a ==8 && b == 9 && c == 10)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
