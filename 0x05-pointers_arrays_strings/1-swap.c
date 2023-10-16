#include "main.h"
/**
 * swap_int - swaps the values of int a and int b
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
