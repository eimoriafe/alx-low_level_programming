#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - to check + or -
 * Description: to compare integers from random
 * @i: number to be checked
 * Return: 0 (Always success)
 */
void positive_or_negative(int i)
{
/**srand(time(0));
 * i = rand() - RAND_MAX / 2;
 * */
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
}
