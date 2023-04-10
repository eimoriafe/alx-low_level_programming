#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program to multiply two numbers.
 * @argc: arguement count
 * @argv: array of pointer to arguement strings
 * Return: 1 if less than 2 args otherwise 0
 */
int main(int argc, char **argv)
{
int result;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
result = atoi(*(argv + 1)) * atoi(*(argv + 2));
printf("%i\n", result);
}
return (0);
}
