#include "main.h"
/**
 *_strcat - concat two strings
 *@dest: pointer to a character
 *@src: pointer to a character that will changed
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
