#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
if (a > b && a > c)
{
printf("%d", a);
}
else if (b > a && b > c)
{
printf("%d", b);
}
else
{
printf("%d", c);
}
printf("\n");
return (0);
}
