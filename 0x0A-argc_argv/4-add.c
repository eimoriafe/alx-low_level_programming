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
int a, b, result = 0;
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[a]);
	}
printf("%d \n", result);
return (0);
}

