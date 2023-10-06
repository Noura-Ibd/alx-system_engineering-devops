#include <stdio.h>
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
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
