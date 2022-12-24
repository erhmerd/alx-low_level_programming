#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * strncat - concatenat two string
 * @dest: input value
 * @src: input value
 * @n: input value
 * return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
for (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
