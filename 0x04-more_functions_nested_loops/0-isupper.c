#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c : checks for uppercase character
 * Return: 0 or 1
 */


int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
