#include "main.h"
/**
 * is_prime_number - check is  prime number
 * @y:intger
 * @n: intger
 * Return: 0 or 1 prime number
 */

int check_prime(int n, int y);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - huifdug check all number < n if they can divide it
 * @n: intger
 * @y: intger
 * Return: prime number
 */

int check_prime(int n, int y)
{

	if (y >= n && n > 1)
		return (1);
	else if (n % y == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, y + 1));
}
