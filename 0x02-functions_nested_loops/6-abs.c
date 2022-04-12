#include "main.h"
/**
 * _abs - checks for absolute ints
 * @int: the number to check
 * Return: 1 if n > 1, 0 if n < 0
 */

int _abs(int n)
{
if (n < 0)
{
_putchar (n * -1);
return (n * -1);
}
else if (n > 0)

{
_putchar(n);

return (n);

}

return (0);

}
