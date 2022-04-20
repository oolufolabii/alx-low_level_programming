#include "main.h"
#include <stdio.h>

/**
 * print_array - prints half of string
 *
 * @a: Array
 * @n: Integer
 *
 * Return: void
 */

void print_array(int *a, int n)
{

int i;

for (i = 0; i < n; i++)

{

if (i == n - 1)

printf("%d", a[i]);

else

printf("%d, ", a[i]);

}

printf("\n");

}
