#include "main.h"


/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the array for success, NULL upon Error
 */

char *_strdup(char *str)
{
char *copier;
unsigned int a, len;

a = 0;
len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;

copier = malloc(sizeof(char) * (len + 1));

if (copier == NULL)
return (NULL);


for (a = 0; a <= ((sizeof(str)) + 1); a++)
copier[a] = str[a];

return (copier);
}
