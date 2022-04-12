#include "main.h"
/**
 * print_alphabet - prints a-z all lower case with a new line.
 *
 * Return: Void.
*/

void print_alphabet(void)
{
int i = 97;
while (i <= 122)
{
_putchar(i);
i++;
}
_putchar('\n');
}
