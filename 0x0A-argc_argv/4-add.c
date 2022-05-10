#include "main.h"

/**
 * main - adds two positive number.
 * @argc: number of arguments.
 * @argv: array of arguents.
 * Return: 0 (Success), or 1 (Success)
 */

int main(int argc, char *argv[])

{
int num, digit, sum = 0;

for (num = 1; num < argc; num++)
{
for (digit = 0; argv[num][digit]; digit++)
{
if (argv[num][digit] < '0' || argv[num][digit] > '9')
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[num]);
}

printf("%d\n", sum);

return (0);
}
