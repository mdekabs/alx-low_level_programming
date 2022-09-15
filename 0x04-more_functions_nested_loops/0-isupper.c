#include "main.h"
#include <ctype.h>

/**
 * _isupper - print char C
 * @c: _isupper see if char is uppercase
 * Return: 1 (success), otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
