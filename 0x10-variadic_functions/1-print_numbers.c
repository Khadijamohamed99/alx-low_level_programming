#include "variadic_functions.h"


/**
 * print_numbers - prints numbers with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int fy = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (fy--)
		printf("%d%s", va_arg(ap, int),
			fy ? (separator ? separator : "") : "\n");
	va_end(ap);
}
