#include "main.h"
/**
 * _memset - file the first n byt of the memory area
 * @s: a pointer to the memory area to be filled
 * @c: athe character to be fill t the memory area with
 * @n: a number to a byte to be fill
 * return - a pointer to the fill memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
