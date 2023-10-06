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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit = n % 10;

	if (lastDigit > 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	} else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	} else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}

	return (0);
}
