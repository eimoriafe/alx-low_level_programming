#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: to print numbers, followed by a new line
 * Return: 0 (Always success)
 */
int main(void)
{
char aph[] = "abcdefghijklmnopqrstuvwxyz";
int i;
i = strlen(aph);
for (i = 25; i >= 0; i--)
{
putchar(aph[i]);

}
putchar('\n');
return (0);
}
