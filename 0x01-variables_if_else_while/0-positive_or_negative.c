#include <stdio.h>
#include <time.h>

/**main - generates a random integer for n
 *
 *return 0 for success
 *
 */

int main(void)
{
int n;

srand(time(0));n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);


 return (0);
}
