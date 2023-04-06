#include "main.h"

/**
 * factorial - it is a find factorial
 * @n: intgers
 * Return: intgers
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
