#include "main.h"
/**
 * _strcat - appends two strings
 * @dest: the destination.
 * @src: the source to be concatenated to @dest.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	char *cpy;

	for (; dest[len] != '\0'; len++)
		;

	cpy = dest + len;
	while (*src != '\0')
		*cpy++ = *src++;
	*cpy = '\0';
	return (dest);
}


