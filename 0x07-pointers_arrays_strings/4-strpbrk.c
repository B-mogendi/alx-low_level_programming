#include "main.h"
/**
*_strpbrk - searches a string for any of a set of bytes
*@s: string where search is made
*@accept: string where searched bytes are located
*
*Return: NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
return (s);
}
s++;
}

return ('\0');
}
