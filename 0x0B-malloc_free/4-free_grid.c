#include "main.h"

/**
 * free_grid - free the gridfsds
 * @grid: grid of memofsdfsdfdsfsfries
 * @height: intfsdjfjs
 * Return: voidfshdkfd
 */

void free_grid(int **grid, int height)
{
	int sam = 0;

	for (; sam < height; sam++)
		free(grid[sam]);
	free(grid);
}
