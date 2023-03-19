#include <stdio.h>
/**
 * main - Entry point
 * Description: to print numbers, followed by a new line
 * Return: 0 (Always success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(' ');
putchar('0' + i);
if (i != 9)
{
putchar(',');
}
}
putchar('\n');
return (0);
}
