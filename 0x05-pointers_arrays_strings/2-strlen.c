#include "main.h"

/**
 * _strlen - Return size in bytes of the string
 * @s: The string
 *
 * Return: The long of the string as an int
 */
int _strlen(char *s)
{
		int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
