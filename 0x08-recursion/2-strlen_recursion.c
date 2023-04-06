#include "main.h"

/**
 * _strlen_recursion - function to return the length of a string
 * @s: string to check
 * Return: length result
 */
int _strlen_recursion(char *s)
{
	int result;
	if (*s == '\0')
		return (0);
	result = 1 + _strlen_recursion(s + 1);
	return (result);
}
