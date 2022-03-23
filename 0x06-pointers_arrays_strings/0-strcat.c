#include "main.h"
#include <string.h>

/**
 *_strcat - concatenates two strings
 * @dest : string to concat
 * @src : string to concat
 * Return: 0 or 1
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
