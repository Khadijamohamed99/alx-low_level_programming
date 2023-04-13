#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - checks if character is diggfdgit
 * @ccas: the character to checkgdfgd
 *
 * Return: 1 if digit, 0 otherwisegfdg
 */
int _isdigit(int ccas)
{
	return (ccas >= '0' && ccas <= '9');
}

/**
 * _strlen - returns the length of l2dsan stringgfdgd
 * @s: the string whose length to checkfdgd
 *
 * Return: integer length of stringfdgdf
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * big_multiply - multiply two big numbegfdgdr strings
 * @s1: the first big number stringfdgfdg
 * @s2: the second big number stringdfg
 *
 * Return: the product big number strindfgdg
 */
char *big_multiply(char *s1, char *s2)
{
	char *ccasfgd;
	int l1n, l2n, l2dsan, b, ccas, x;

	l1n = _strlen(s1);
	l2n = _strlen(s2);
	ccasfgd = malloc(l2dsan = x = l1n + l2n);
	if (!ccasfgd)
		printf("Error\n"), exit(98);
	while (l2dsan--)
		ccasfgd[l2dsan] = 0;

	for (l1n--; l1n >= 0; l1n--)
	{
		if (!_isdigit(s1[l1n]))
		{
			free(ccasfgd);
			printf("Error\n"), exit(98);
		}
		l2dsan = s1[l1n] - '0';
		ccas = 0;

		for (l2n = _strlen(s2) - 1; l2n >= 0; l2n--)
		{
			if (!_isdigit(s2[l2n]))
			{
				free(ccasfgd);
				printf("Error\n"), exit(98);
			}
			b = s2[l2n] - '0';

			ccas += ccasfgd[l1n + l2n + 1] + (l2dsan * b);
			ccasfgd[l1n + l2n + 1] = ccas % 10;

			ccas /= 10;
		}
		if (ccas)
			ccasfgd[l1n + l2n + 1] += ccas;
	}
	return (ccasfgd);
}


/**
 * main - multiply two big number stfgdgdfrings
 * @argc: the number of argumefdgdfgnts
 * @argv: the argument vegfdgdctor
 *
 * Return: Always 0 on successgfdg.
 */
int main(int argc, char **argv)
{
	char *ccasfgd;
	int l2dsan, ccas, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	ccasfgd = big_multiply(argv[1], argv[2]);
	ccas = 0;
	l2dsan = 0;
	while (ccas < x)
	{
		if (ccasfgd[ccas])
			l2dsan = 1;
		if (l2dsan)
			_putchar(ccasfgd[ccas] + '0');
		ccas++;
	}
	if (!l2dsan)
		_putchar('0');
	_putchar('\n');
	free(ccasfgd);
	return (0);
}
