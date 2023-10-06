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
	for (int ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (int ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
