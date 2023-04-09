#include <stdio.h>
/**
 * main - Program that prints its name, followed by a new line.
 * @argc: arguement count
 * @argv: the vector or array of pointer to the argc strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
while (argc--)
	printf("%s\n", argv[0]);
return (0);
}
