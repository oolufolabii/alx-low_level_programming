#include <stdio.h>
/**
 * main - Entry point for alphabets
 *
 * Return: Always 0 for Success
 */

int main(void)

{

char alphabet;
while (alphabet <= 'z')

{
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);

}
alphabet++
}

putchar('\n');
return (0);
}
