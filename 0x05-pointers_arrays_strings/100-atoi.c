#include "main.h"
/**
 * _atoi - Converts alpha to int
 *
 * @s: String
 *
 * Return: int
 */

int _atoi(char *s)
{
unsigned int result = 0;
int sign = 1;
int i;
int alpha = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{

alpha = 1;

result = (result * 10) + (s[i] - '0');

}
else if (alpha != 0)
break;
}
return (result *sign);
}
