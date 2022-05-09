#include "main.h"

/**
 * *string_nconcat - concatenates a string to another string
 * @s1: string to append to
 * @s2: string to be appended
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *string;
unsigned int i = 0, j = 0, s1_lenght = 0, s2_lenght = 0;

while (s1 && s1[s1_lenght])
s1_lenght++;
while (s2 && s2[s2_lenght])
s2_lenght++;

if (n < s2_lenght)
string = malloc(sizeof(char) * (s1_lenght + n + 1));
else
string = malloc(sizeof(char) * (s1_lenght + s2_lenght + 1));

if (!string)
return (NULL);

while (i < s1_lenght)
{
string[i] = s1[i];
i++;
}

while (n < s2_lenght && i < (s1_lenght + n))
string[i++] = s2[j++];

while (n >= s2_lenght && i < (s1_lenght + s2_lenght))
string[i++] = s2[j++];

string[i] = '\0';

return (string);
}
