#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)

{
int i, j;
j = 0;
while (j <= 10)
{
for (i = 97; i <= 122; i++)
{
putchar(i);
}
j++;
putchar('\n');
}
}
