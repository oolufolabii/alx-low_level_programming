#include "main.h"

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the new string (Success), NULL (Error)
 */

char *argstostr(int ac, char **av)
{
int i, j, a, b;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
b++;
b++;
}

str = malloc((b + 1) *sizeof(char));

if (str == NULL)
return (NULL);

a = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[a] = av[i][j];
a++;
}
str[a] = '\n';
a++;
}

return (str);
}
