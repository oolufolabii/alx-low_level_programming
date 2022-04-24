#include "main.h"
/**
 * rot13 - encodes a string in rot-13
 * @s: string to be modified
 * Return: return the modified string
 */

char *rot13(char *s)
{
int i, j;
char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; x[j] != '\0'; j++)
{
if (s[i] == x[j])
{
s[i] = y[j];
break;
}
}
}
return (s);
}
