#include "main.h"
#include <stdio.h>

/**
 * rest_to_98 - check the code for Holberton School students.
 * @n: int parameter
 * Return: nothing
 */

void reset_to_98(int *n)
{
	*n = 98;

	printf("%p\n", n);
	printf("%d\n", n);
}
