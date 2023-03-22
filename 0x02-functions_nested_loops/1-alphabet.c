#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * description: print alphabet in lowercase
 * Return: 0 Always Success
 */
int main(void)
{
char i;
i = 'a';
while (i <= 'z')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
