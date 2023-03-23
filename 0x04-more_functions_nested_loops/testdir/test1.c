#include <stdio.h>

int i;
//char f;
//char b;
//char b_n_z;
//char f = "Fizz";
//char b = "Buzz";
//char b_n_z = "FIzzBuzz";
int main(void)
{
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
printf("%d ", i);
}
}
printf("\n");
return (0);
}
