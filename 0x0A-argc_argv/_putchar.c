#include <unistd.h>

/**
 * _putchar - writes the char c to stdo
 * @c: is the char to print
 *
 * Return: 1
 * return -1 upon error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
