#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* Description:  'print numbers with multiples of 3 and 5'
* Return:0 (Success)
*/
int main(void)
{
int i;
{
for (i = 1; i <= 100; i++)
	if ((i % 3 == 0) && !(i % 5 == 0))
	{
		printf("Fizz ");
	}
	else if ((i % 5 == 0) && !(i % 3 == 0))
	{
		printf("Buzz ");
	}
	else if ((i % 3 == 0) && (i % 5 == 0))
	{
		printf("FizzBuzz ");
	}
	else
	{
		printf("%i ", i);
	}
}
printf("\n");
return (0);
}
