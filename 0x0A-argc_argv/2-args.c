#include <stdio.h>
/**
 * main - Program that prints the number of arguements passed into it
 * @argc: arguement count
 * @argv: array of pointer to arguement strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
