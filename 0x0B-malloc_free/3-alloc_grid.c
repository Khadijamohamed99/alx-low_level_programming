#include "main.h"

/**
 * **alloc_grid - returns a pgfdgdointer to a 2 dimensional array of integers.
 * @width: intdfgdg
 * @height: intgdfgdgf
 * Return: 2d arraygdfgdg
 */

int **alloc_grid(int width, int height)
{
	int **tam, am, sam;

	tam = malloc(sizeof(*tam) * height);

	if (width <= 0 || height <= 0 || tam == 0)
	{
		return (NULL);
	}
	else
	{
		for (am = 0; am < height; am++)
		{
			tam[am] = malloc(sizeof(**tam) * width);
			if (tam[am] == 0)
			{
				/*Free everything if malloc fails*/
				while (am--)
					free(tam[am]);
				free(tam);
				return (NULL);
			}

			for (sam = 0; sam < width; sam++)
				tam[am][sam] = 0;
		}
	}

	return (tam);
}
