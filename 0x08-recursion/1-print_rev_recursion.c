#include "main.h"
/**
 * _print_rev_recursion - function to prints a string in reverse.
 * @s: string to be reversed
 *
 */
void _print_rev_recursion(char *s)
{
/** check string*/
if (*s) 
{
	/** trasverse string */
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
