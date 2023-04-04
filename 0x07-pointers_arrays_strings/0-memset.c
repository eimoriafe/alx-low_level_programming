#include "main.h"
/**
 * _memset - fills a block of memory with constant byte
 * @s: pointer to memory area.
 * @b: constant byte
 * @n: the number of bytes of memory to be filled with b
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}


