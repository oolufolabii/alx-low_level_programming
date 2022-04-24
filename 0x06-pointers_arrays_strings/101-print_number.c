#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 */

void print_number(int n)
{
unsigned int a, c, aux;

if (n < 0)
{
_putchar(45);
a = n * -1;
}

else
{
a = n;
}
c = a;
aux = 1;

while (c > 9)
{
c /= 10;
aux *= 10;
}

for (; aux >= 1; aux /= 10)
{
_putchar(((a / aux) % 10) + 48);
}
}
