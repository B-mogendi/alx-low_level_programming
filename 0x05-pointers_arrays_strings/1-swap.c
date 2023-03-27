#include "main.h"
/**
 * swap_int - swaps integers
 * @a: integer
 * @b: integer
 * Return - 0 always
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
