#include "main.h"

/**
 * _strspn - gets lengthof a prefix substring
 * @s: string to check
 * @accept: string to check against
 * Return: number of bytes of s in accept
 */

unsigned int _strspn(char *s, char *accept)

{
int i, j, a, b;

a = 0;

for (i = 0; s[i] != '\0'; i++)
{
b = 0;

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
a++;
b = 1;
}
}

if (b == 0)
{

return (a);
}
}

return (0);
}
