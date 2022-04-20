#include "main.h"
/**
 * _strlen - check length of a given string
 * @s: string to check
 *
 * Return: length of string
 */

int _strlen(char *s)

{
int i = 0;

char c = 'n';

while (c != '\0')
{
c = s[i];
i++;
}

return (i - 1);

}
