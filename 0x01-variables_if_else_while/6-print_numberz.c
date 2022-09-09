#include <stdio.h>

/**
 * main - Print numbers since 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}
	  putchar('\n');

	return (0);
}
