#include "main.h"

/**
 *_print_rev_recursion - reverse string print out
 *@s: pointer bloc
 *Return: void
 */

void _print_rev_recursion(char *s)
{
if (*s) /*the conditon*/
{
_print_rev_recursion(s + 1); /*add one to s*/
_putchar(*s); /*print s*/
}
}
