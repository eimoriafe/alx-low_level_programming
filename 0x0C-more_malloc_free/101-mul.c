#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _isdigit(char *s);
/**
 * main - takes two numbers as arguments and outputs the product.
 * @argc: arguement count.
 * @argv: vector to array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	if (argc != 3)
	{
		for (i = 0; ERR_MSG[i] != '\0'; i++)
			_putchar(ERR_MSG[i]);
		_putchar(10);
		exit(98);
	}
	if (_isdigit(argv[1]) == 0)
		printf("%s\n", argv[1]);

	return (0);
}
int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < 48 || *s > 57)
			return (1);
		s++;
	}
	return (0);
}
