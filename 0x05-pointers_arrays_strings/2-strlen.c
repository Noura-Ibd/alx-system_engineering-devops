#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: char to check
 *
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
