#include "main.h"

/**
 * _sqrt_recursion - find natural square.
 * @n: int
 * @y: square
 * Return: Integer
 */
int square(int n, int y);

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square
 * @n: int
 * @y: square
 * Return: Integer
 */

int square(int n, int y)
{

	if (y * y == n)
		return (y);
	else if (y * y < n)
		return  (square(n, y + 1));
	else
		return (-1);

}
