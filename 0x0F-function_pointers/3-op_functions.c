#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum function
 * @a: operand 1
 * @b: operand 2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - minus function
 * @a: operand 1
 * @b: operand 2
 * Return: a minus b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product function
 * @a: operand 1
 * @b: operand 2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: operand 1
 * @b: operand 2
 * Return: result of a ÷ b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus function
 * @a: operand 1
 * @b: operand 2
 * Return: the remainder of a ÷ b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
