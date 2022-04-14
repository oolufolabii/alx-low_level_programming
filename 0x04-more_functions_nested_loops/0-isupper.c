#include "main.h"

/**
 * _isupper - check if character is upper case
 * @c: character to be checked
 * Return: 1 for upper case, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
