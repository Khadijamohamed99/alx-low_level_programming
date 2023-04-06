#include "main.h"

/**
 * get_length - Check a string is  palindrome
 * Description: Get the legth
 * @s: pointer the string
 * Return: Int
 */

int get_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + get_length(s + 1));
}

/**
 * check_palindrome - Checker the palindrome
 * Description: Checking Palindrome
 * @s: point the string
 * @start: Int
 * @end: Int
 * Return:Int
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*(s + start) == *(s + end))
	{
		return (check_palindrome(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - Checker for the palindrome
 * Description: Palindrome
 * @s: Character
 * Return: Int
 */

int is_palindrome(char *s)
{
	int len = get_length(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, len - 1));
}
