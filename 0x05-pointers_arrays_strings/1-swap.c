#include "main.h"

/**
 * swap_int - swap the valuse of two ints a and b
 *@a: A pointer to an int that will 
 *@b: B pointer to an int that will be updated
 * Return: void shows its correct
 */

void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
