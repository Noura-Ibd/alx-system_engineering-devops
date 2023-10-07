#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - The main entry point of the program.
 *
 * This function serves as the entry point for the program.
 * It initializes the kernel and performs the main processing tasks.
 *
 * Return: 0 on success, an error code on failure.
 */
int main(void)
{
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastD = n % 10;

	if (lastD > 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
	} else if (lastD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastD);
	} else if (lastD < 6 && lastD != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
	}

	return (0);
}
