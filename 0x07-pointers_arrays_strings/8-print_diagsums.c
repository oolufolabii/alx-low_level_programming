#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int c;

unsigned int sum2, sum1;

sum1 = 0;
sum2 = 0;

for (c = 0; c < size; c++)
{
sum1 += a[(size * c) + c];
sum2 += a[(size * (c + 1)) - (c + 1)];
}

printf("%d, %d\n", sum1, sum2);

}
