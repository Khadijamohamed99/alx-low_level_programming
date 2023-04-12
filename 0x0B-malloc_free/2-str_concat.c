#include "main.h"

/**
 * _strlen - find lengthgfdg of a string
 * @s: stringfdgdf
 * Return: intgfdgfd
 */


int _strlen(char *s)
{
	int sm = 0;

	for (; s[sm] != '\0'; sm++)
	;
	return (sm);
}

/**
 * *str_concat - confdrgrdcatenates two strings
 * @s1: string 1 dggfdg
 * @s2: string 2 fgdgdf
 * Return: pointerfgdgfd
 */

char *str_concat(char *s1, char *s2)
{
	int sm1, sm2, ad;
	char *afdsd;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	sm1 = _strlen(s1);
	sm2 = _strlen(s2);
	afdsd = malloc((sm1 + sm2) * sizeof(char) + 1);
	if (afdsd == 0)
		return (0);

	for (ad = 0; ad <= sm1 + sm2; ad++)
	{
		if (ad < sm1)
			afdsd[ad] = s1[ad];
		else
			afdsd[ad] = s2[ad - sm1];
	}
	afdsd[ad] = '\0';
	return (afdsd);
}
