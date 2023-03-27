#include "main.h"
#include<string.h>
/**
 *_strlen - counts numbers of characters
 *@s: string to be checked
 * Return - length
 */
int _strlen(char *s)
{
int beck = 0;
while (*s != '\0')
{
beck++;
s++;
}
return (beck);
}
