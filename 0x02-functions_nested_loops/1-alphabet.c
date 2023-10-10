#include  <stdio.h>
/**
 * print_alphabet - print all alphabet in lowercase
 *
 * Return: 0 on success, an error code on failure.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch < 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
