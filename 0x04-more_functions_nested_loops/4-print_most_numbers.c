#include "main.h"

/**
 * print_most_numbers - print digits from 0 to 9 except 2 and 4
 *
 * Return: none
 */
void print_most_numbers(void)
{
int number;
int count;


count = 0;
while (count < 10)
{
for (number = '0' ; number <= 14; number++)
{
_putchar(number);
}

count++;
_putchar('\n');
}

}
