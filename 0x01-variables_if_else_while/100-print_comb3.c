#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 1; n <= 9; n++)
	{
		for (m = 1; m <= 9; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 8 || m != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
