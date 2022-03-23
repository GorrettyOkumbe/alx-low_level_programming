#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest : string to caoncat
 * @src : string to concat
 * @n : number of bytes
 * Return : 0 or 1
 */
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src);
	return (dest);
}
