#include "main.h"
#include<string.h>
/**
 *_puts - prints string
 *@str: string to be checked
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}

