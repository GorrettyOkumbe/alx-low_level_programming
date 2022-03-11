#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 * followed by a new line.
 * return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
