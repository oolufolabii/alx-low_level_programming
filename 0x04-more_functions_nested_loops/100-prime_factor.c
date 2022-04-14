#include <stdio.h>
#include "main.h"

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
long int n, j;

n = 612852475143;
for (j = 2; j <= n; j++)
{
if (n % j == 0)
{
n /= j;
j--;
}
}
printf("%ld\n", j);
return (0);
}
