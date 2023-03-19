#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <studio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	/* your code goes there */	
        {
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}	
	return (0);
}
