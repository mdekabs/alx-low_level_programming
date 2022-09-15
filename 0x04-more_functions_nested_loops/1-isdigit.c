#include "main.h"

/**
 * _isdigit - print char C
 * @c: _isdigit check for a digit
 * Return: 1 (success), else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
