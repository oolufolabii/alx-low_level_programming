#include <stdio.h>
/**
 * main - Entry point for alphabets
 *
 * Return: Always 0 for Success
 */

int main(void)

{

char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);

}

for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)

{
putchar(alphabet);
}

putchar('\n');
return (0);
}
