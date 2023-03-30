#include "main.h"
#include <unistd.h>
/**
 *_putchar - display character
 *@c: character to be displayed
 *Return: 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
