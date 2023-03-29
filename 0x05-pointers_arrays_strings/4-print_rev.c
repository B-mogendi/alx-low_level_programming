#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string printed
 * Return - ....
 */
void print_rev(char *s)
{
int beck = 0;
int i;
while (*s != '\0')
{
beck++;
s++;
}
s--;

