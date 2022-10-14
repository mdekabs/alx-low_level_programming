#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name
 * @name
 * @f: pointer to print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
