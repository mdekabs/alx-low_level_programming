#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of an char: %d bytes(s)\n", sizeof(a));
	printf("size of a int: %d bytes(s)\n", sizeof(b));
	printf("size of a long int: %d bytes(s)\n", sizeof(c));
	printf("size of a long long int: %d bytes(s)\n", sizeof(d));
	printf("size of a float: %d bytes(s)\n", sizeof(e));
	return (0);
}
