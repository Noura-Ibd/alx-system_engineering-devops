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
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
