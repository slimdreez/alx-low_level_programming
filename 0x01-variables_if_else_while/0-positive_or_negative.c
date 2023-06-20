#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main – main block
 * This program will assign a random number to the
 * variable n each time it is executed
 * And states whether it is positive, negative or zero
 * Return: Always 0 (Success)
 */

int main(void)
{
	// Betty documentations style
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
