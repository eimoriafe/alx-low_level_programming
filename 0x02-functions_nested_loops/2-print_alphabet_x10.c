#include "main.h"
/**
 * print_alphabet_x10 - To print alphabets 10 times in lower case
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char n;
int c;
c = 0;
while (c < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
c++;
}
}
