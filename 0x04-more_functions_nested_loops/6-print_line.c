#include "main.h"

/**
*print_line - prints a straight line
*@n: parameter
*Return:returns nothing
*/

void print_line(int n)
{
	int x;
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
