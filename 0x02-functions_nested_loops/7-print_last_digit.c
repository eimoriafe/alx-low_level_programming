#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
int ldigit;
ldigit = n % 10;
if (ldigit < 0)
{
	ldigit *= -1;
	_putchar(ldigit + '0');
	return (ldigit);
}
}
