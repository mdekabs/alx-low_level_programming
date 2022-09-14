#include "main.h"

/**
 * print_sign - function for number checking
 * @n:  int for arguement in the function
 * Return: 1 and add suppose n is greater than zero
 * 0 and print zero if n is zero
 * -1 and minus if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('48');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
	}
		return (-1);
}
