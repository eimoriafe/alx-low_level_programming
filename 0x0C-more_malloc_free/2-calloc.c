#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocates using malloc.
 * @nmemb: memory blocks created.
 * @size: size of each block.
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memarray;
	unsigned int len;
	len = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	memarray = malloc(len);
	if (memarray == NULL)
		return (NULL);
	_memset(memarray, 0, len);
	return (memarray);
}
