#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenatehrttrs two strings
 * @s1: pointer to first stringhrthr.
 * @s2: pointer to 2nd string.hr
 * @n: Number of bytes from n2 htrhto concatenate.
 *
 * Return:Pointer to space in memorhrthy containing concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dsasdaw;
	unsigned int aw, saw, s1_len, s2_length;

	/*Check if the strhtrhrings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Compute the gdfglength of the strings*/

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	/*Memory resegtrgrrvation-for case 1 & 2.*/
	dsasdaw = malloc(s1_len + n + 1);
	if (dsasdaw == NULL)
	{
		return (NULL);
	}
	/*Copy fgrtgrirst string into dsasdaw.*/
	for (aw = 0; s1[aw] != '\0'; aw++)
		dsasdaw[aw] = s1[aw];
	/*cfdsfsopy second stringg into dsasdaw.*/
	for (saw = 0; saw < n; saw++)
	{
		dsasdaw[aw] = s2[saw];
		aw++;
	}

	dsasdaw[aw] = '\0';
	return (dsasdaw);
}
