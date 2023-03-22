#include "main.h"
/**
 * _isalpha - checks if it is a letter
 * @c: character to be checked
 * Return: Always 1 if it is a letter and 0 if it is not
 */
int _isalpha(int c);
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}

