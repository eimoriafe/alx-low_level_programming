#include "main.h"
/**
* print_line - prints straight line in terminal
*
* Return: 0
*/
void print_line(int n)
{
int i;
int line_count;
for (line_count = 0; line_count < 10; line_count++)
{ 
	for (i = 0; i < 15; i++)
	{
		if (i > 9)
		{
		_putchar((1) + i);
		}
		else
		{
		_putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
_putchar('\n');
}
