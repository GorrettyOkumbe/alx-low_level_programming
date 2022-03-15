#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 79; n <= 89; n++)
	{
		for (m = 79; m <= 89; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 88 || m != 88)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
