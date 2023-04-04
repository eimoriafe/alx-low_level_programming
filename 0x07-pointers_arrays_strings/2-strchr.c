#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates character in string
 * @s: string to search
 * @c: character to look for.
 * Return: pointer to the first match of c in s
 */
char *_strchr(char *s, char c)
{
int a;
while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
