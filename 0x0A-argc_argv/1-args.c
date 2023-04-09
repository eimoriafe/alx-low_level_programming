#include <stdio.h>
/**
 * main - Program that prints the number of arguements passed into it
 * @argc: arguement count
 * @argv: array of pointer to arguement strings
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
