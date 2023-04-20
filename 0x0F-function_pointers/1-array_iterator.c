#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: integer array
 * @size:array size
 * @action: a pointer to the function that should be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && action)
for (i = 0; i < size; i++)
action(array[i]);
}
