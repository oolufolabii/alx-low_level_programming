#include "main.h"

/**
 * _strcpy - copies string
 *
 * @dest: copy
 * @src: original
 *
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)

{

int i = 0;

int j;

while (src[i] != '\0')

i++;

for (j = 0; j < i; j++)

dest[j] = src[j];

dest[i] = '\0';

return (dest);

}
