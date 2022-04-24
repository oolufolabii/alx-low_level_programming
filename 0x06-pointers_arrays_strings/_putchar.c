#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes out the character
 * @c: The character to print
 * Return: return 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
