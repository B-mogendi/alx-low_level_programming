#include "main.h"
/**
 * print_line - prints a line
 * @n: the number of times
 * Return 0: if success
 */
void print_line(int n)
{
int x;
if (n <= 0)
{
_putchar('\n');
}
for (x = 0; x < n; x++)
{
_putchar(95);

}
_putchar('\n');

}



