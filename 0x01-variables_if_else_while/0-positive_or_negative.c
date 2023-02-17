#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * Main - Entry point
 * Description - This function check rand number if is negative or posetive.
 *
 * Return Always (0) Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if(n == 0)
	{
		printf("is zero\n");
	}
	return (0);
}
