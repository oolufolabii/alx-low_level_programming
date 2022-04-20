#include "main.h"

/**
 * rev_string - Reverses string
 *
 * @str: String to be reversed
 *
 * Return: void
 */
void rev_string(char *str)
{
int i = 0;
int j;
char temp;
while (str[i] != '\0')
{
i++;
}
i--;

for (j = 0; j < i; i--, j++)
{
temp = str[j];
str[j] = str[i];
str[i] = temp;
}
}
