#include "main.h"

/**
 * _pow_recursion - Entry points
 * Description: Return the value of x
 * @x: return
 * @y: bases
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
