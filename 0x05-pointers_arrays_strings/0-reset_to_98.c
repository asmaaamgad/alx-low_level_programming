#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * pointer to an int as parameter and updates the value it points to to 98
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int *n = 98;
	int s = 98;

	printf("%p\n", n);
	printf("%d\n", n);
}
