#include "main.h"
/**
 * is_prime_number - function that returns 1 for prime number,otherwise 0.
 * @prime: Is my number prime
 * Return:1 for prime number,otherwise return 0
 */
int is_prime_number(int prime)
{
if ((prime % 2 == 0) || (prime % 3 == 0) || (prime % 5 == 0))
return (0);
else if ((prime % 9 == 0) || (prime <= 1) || (prime % 7 == 0))
return (0);
else
return (1);
}
