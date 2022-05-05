#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
char *k;
int c, i, j, a;

if (ac == 0)
return (NULL);

for (c = i = 0; i < ac; i++)
{
if (av[i] == NULL)
return (NULL);

for (j = 0; av[i][j] != '\0'; j++)
c++;
c++;
}

k = malloc((c + 1) * sizeof(char));

if (k == NULL)
{
free(k);
return (NULL);
}

for (i = j = a = 0; a < c; j++, a++)
{
if (av[i][j] == '\0')
{
k[a] = '\n';
i++;
a++;
j = 0;
}

if (a < c - 1)
k[a] = av[i][j];
}
k[a] = '\0';

return (k);
}
