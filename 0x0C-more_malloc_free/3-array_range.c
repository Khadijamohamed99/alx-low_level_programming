#include "main.h"

/**
 * array_range - creferfreates an array of integers
 * @min: startifsferng int
 * @max: max intfrefer
 * Return: array of infefretegers
 */
int *array_range(int min, int max)
{
	int len, cfdc;
	int *fdc;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	fdc = malloc(sizeof(int) * len);
	if (!fdc)
		return (NULL);
	for (cfdc = 0; cfdc < len; cfdc++)
		fdc[cfdc] = min++;
	return (fdc);
}
