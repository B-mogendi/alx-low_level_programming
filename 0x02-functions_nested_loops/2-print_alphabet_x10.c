#include "main.h"
/**
 * print_alphabet_x10  - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int c;
int i;
i = 1;
while (i <= 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
