#include "main.h"

/**
 * puts2 - print a char out of 2
 * then a new line
 * @str: string to print from char
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
