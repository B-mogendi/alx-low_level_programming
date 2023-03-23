#include "main.h"
/**
 * print_most_numbers - it outputs numbers
 * Return: ....
 */
void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
if (c == '2')
{
continue;
}
if (c == '4')
{
continue;
}
_putchar(c);
}
_putchar('\n');
}
