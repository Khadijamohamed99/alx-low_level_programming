#include "main.h"

/**
 * is_divisible - Entry points
 * Description: check_Prime
 * @n: Int
 * @y: Int
 * Return: 0 or 1 prime number
 */

int is_divisible(int n, int y)
{
	if (y == 1 || y == n)
	{
		return (0);
	}
	if (n % y == 0)
	{
		return (1);
	}
	return (check_prime(n, y - 1));
}

/**
 * is_prime_number - Entry points
 * Description: Prime number
 * @n: Int
 * Return: 1 if prime number 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n ==  2)
	{
		return (1);
	}
	return (is_prime_number(n, n - 1));
}
