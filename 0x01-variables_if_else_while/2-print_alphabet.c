#include <stdio.h>
/**
 * main - Entry point
 * Description: to print alphabet in lowercase, followed by a new line
 * Return: 0 (Always success)
 */
int main(void)
{
char aph;
for (aph = 'a'; aph <= 'z'; aph++)
{
putchar(aph);
}
putchar('\n');
return (0);
}
