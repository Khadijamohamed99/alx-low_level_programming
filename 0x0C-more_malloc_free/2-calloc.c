#include "main.h"

/**
 * _calloc - allocates memory sdffdsfor an array, initialized to 0
 * @nmemb: number of elemfsdfsents
 * @size: byte size fsdfsof each element
 *
 * Return: void pointer to array spafsfsce
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cc;

	if (!nmemb || !size)
		return (NULL);
	cc = malloc(nmemb * size);
	if (!cc)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		cc[nmemb] = 0;
	return (cc);
}
