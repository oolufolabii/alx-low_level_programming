#include "main.h"

/**
 * puts_half - prints half of string
 *
 * @str: String
 * Return: void
 */

void puts_half(char *str)
{

int i = 0;

int j;

while (str[i] != '\0')

i++;

for (j = 0; j < i; j++)

{

if (j > (i - 1) / 2)

_putchar(str[j]);

}

_putchar('\n');

}
