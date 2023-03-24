#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: the number of times
 * Return 0: if success
 */
void print_diagonal(int n)
{
int r, c;
if (n <= 0)
{
_putchar('\n');
}
for (r = 0; r < n; r++)
{
for (c = 0; c < r; c++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
