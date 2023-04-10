#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: vector or pointer to array of string of argument
 * Return: 0  if no number, 1 if number contain non-digit symbols
 */
int main(int argc, char *argv[])
{
int sum, i = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
if (argc < 1)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
sum = sum + atoi(argv[i]);
printf("%d\n", sum);

return (0);
}
