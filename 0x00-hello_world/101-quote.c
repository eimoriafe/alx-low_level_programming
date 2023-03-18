#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
i * Description: 'Prints and that piece of art is useful...'
 * Return: Always 0 (Success)
 */
int main(void)
{
/*char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";*/
/* fwrite(str, sizeof(str), , stdout);*/
write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
return (1);
}
