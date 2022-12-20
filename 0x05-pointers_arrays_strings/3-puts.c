#include "main.h"
/**
 * _puts - prit  strig followed by a new line, to stdout
 * @str: string: string to pointer
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
