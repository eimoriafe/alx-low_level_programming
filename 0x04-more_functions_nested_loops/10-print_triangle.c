#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: numbers of triangle to print
 * Return: 0
 */

void print_triangle(int size)
{
	int r, col, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (col = 1; col <= size - r; col++)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= r; hash++)
			{
				_putchar('#');
			}
			if (r == size)
				continue;
			_putchar('\n');
		}
			_putchar('\n');
	}
}
