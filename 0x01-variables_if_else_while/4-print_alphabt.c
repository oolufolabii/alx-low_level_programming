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
if (alphabet != 'q' || 'e')
{
putchar(alphabet);

}


putchar('\n');
return (0);
}
