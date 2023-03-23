#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: number that the sign will be printed.
 * Return: 1 or 0.
 */
int print_sign(int n)
{
int n2;
if (n > 0)
{
n2 = 1;
_putchar('+');
}
else if (n == 0)
{
n2 = 0;
_putchar('0');
}
else
{
n2 = -1;
_putchar('-');
}
return (n2);
}
