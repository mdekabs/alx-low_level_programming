#include <stdio.h>
#include <stdlib>
#include <time>

/**
 * main - print number from 0 to 9 , ans ' '
 *
 * Return: Always 0 (successfull)
 */
int main(void)
{
int m;

for (m = '0'; m <= '9'; m++)
{
putchar(m);
if (m != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
