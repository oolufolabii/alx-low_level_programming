#include "main.h"
/**
 * string_toupper - changes the lowercase of a string
 * @s: string to modify
 * Return: returns the modified string
 */
char *string_toupper(char *s)
{
int a;

for (a = 0; s[a] != '\0'; a++)
{

if (s[a] >= 'a' && s[a] <= 'z')

s[a] = s[a] - 32;
}

return (s);
}
