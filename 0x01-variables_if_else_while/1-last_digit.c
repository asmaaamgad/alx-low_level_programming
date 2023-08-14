#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  entry point
 * Description: 'get the last digit of the numper
 * Return: Always 0
*/
int main(void)
{
	int n;
	int dg;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dg = n % 10;
	if (n > 5)
	{
		printf ("Last digit of %d is %d and is greater than 5\n", n, dg);
	}
	else if (n == 0)
	{
		printf ("Last digit of %d is %d and is 0\n", n, dg);
	}
	else
	{
		printf ("Last digit of %d is %d and is less than 6 and not 0\n", n, dg);
	}
	return (0);
}
