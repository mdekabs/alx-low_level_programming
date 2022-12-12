#include "main.h"

/**
 * _isupper returns 1 if char is uppercase
 * @c: char to check if uppercase
 *
 * return: 1 if uppercase else return 0
 */
int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
