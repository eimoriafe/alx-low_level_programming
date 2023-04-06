#include "main.h"
/**
 * _pow_recursion - Function that returns the value of x raised to y.
 * @x: input number
 * @y: power number
 * Return: -1 if y is lower than zero  
 */
int _pow_recursion(int x, int y)
{
	int result;
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	result = x * _pow_recursion(x, y - 1);
	return (result);
}

