#include "main.h"
/**
 * factorial - function to returns factorial of a given number.
 * @n: input number
 * Return: The factorial
 */
int factorial(int n)
{
	int fact_num;
	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else
	fact_num = (n * factorial(n - 1));
	return (fact_num);
}
