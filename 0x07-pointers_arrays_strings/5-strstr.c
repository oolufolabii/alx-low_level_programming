#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 * Return: pointer to beginning of needle in haystack or 0 if not
 */


char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}

if (!needle[j])
return (&haystack[i]);
}

return (0);

}
