#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the codfvde for The School students.
 * @argc: the numbervds of args
 * @argv: argument vectorfvd
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int sam;

	if (argc != 2)
		printf("Error\n"), exit(1);
	sam = atoi(argv[1]);
	if (sam < 0)
		printf("Error\n"), exit(2);

	while (sam--)
		printf("%02hhx%s", *p++, sam ? " " : "\n");
	return (0);
}
