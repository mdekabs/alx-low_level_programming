#include "main.h"

/**
 * print_line - Prints a line n _ char
 * @n: Long line
 *
 * Return: none
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
