#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - entry function
 * @argc: number of passed arguments
 * @argv: an array of elements
 * Return: 0
 */
int main(int argc, char **argv)
{
int x, y;
char o;
int (*op_func)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
x = atoi(argv[1]);
y = atoi(argv[3]);
o = *argv[2];
op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}

	if ((o == '/' || o == '%') && y == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", op_func(x, y));
	return (0);
}
