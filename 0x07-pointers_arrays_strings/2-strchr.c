#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to check
 * @c: char to find
 * Return: pointer to spot in s with c or null
 */

char *_strchr(char *s, char c)
{
int a;

while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}

if (a == 0)
{
return (0);
}
}
}
