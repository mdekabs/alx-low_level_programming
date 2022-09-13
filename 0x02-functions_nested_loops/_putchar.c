#include <unistd.h>

/*
 * _putchar - character c to stdout
 * @c: char for printing
 *
 * Return: successful 1.
 * upon error, return -1, 
 */
int _putchar(char c)
{
	return (write(1, &c, 1)):
}
