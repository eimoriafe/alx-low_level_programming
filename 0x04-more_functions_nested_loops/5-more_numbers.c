#include "main.h"
/**
* more_numbers - prints excluding 2 and 4
* Return: 0
*/
void more_numbers(void)
{
int i; 
int line_count;
for (line_count = 0; line_count <= 10; line_count++)
{ 
	for (i = 0; i < 15; i++)
	{
		if (i > 9)
		   _putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
_putchar('\n');
}
}
