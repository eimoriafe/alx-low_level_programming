#include "main.h"
/**
 * _sqrt_recursion - function to return natural square root of a number
 * @n: number to be returned
 * Return: -1 if n does not have natural square root
 */
int my_sqrt_func(int x, int y)
{
	if (x == (y * y))
		return (y);
	else if ((y * y) >= x)
		return (-1);
	else
		return (my_sqrt_func(x, y + 1));
}

int _sqrt_recursion(int n)
{
	int result;
	if (n <= 0)
		return (-1);
	else
	result = my_sqrt_func(n,0);
	return (result);
}
