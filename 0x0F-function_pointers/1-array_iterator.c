#include "function_pointers.h"

/**
 * array_iterator - maps an arrfdsay through a func pointer
 * @array: the int arrayfds
 * @size: the array sizefds
 * @action: function pointefdsr
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && size && action)
		while (array <= e)
			action(*array++);
}
