#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name using a specified function
 * @name: the name to print
 * @f: a function that takes a char pointer and returns nothing
 *
 * This function calls the function pointed to by f, passing the name
 * as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
