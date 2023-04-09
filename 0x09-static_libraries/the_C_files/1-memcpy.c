#include "main.h"
/**
 * _memcpy - copies n bytes from memory area "src" to area "dest"
 * @dest: mem area destination
 * @src: mem area source
 * @n: the number of bytes of src to copy from src.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
