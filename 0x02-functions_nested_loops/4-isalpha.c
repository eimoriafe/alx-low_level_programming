#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: member that is checked
 * Return: 1 if c is lowercase or 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
