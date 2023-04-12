#include "main.h"

/**
 * wrdcnt - counts the numsfdsber of words in a string
 * @s: string to countfdsf
 *
 * Return: int of number of wfdsfords
 */
int wrdcnt(char *s)
{
	int ba, msan = 0;

	for (ba = 0; s[ba]; ba++)
	{
		if (s[ba] == ' ')
		{
			if (s[ba + 1] != ' ' && s[ba + 1] != '\0')
				msan++;
		}
		else if (ba == 0)
			msan++;
	}
	msan++;
	return (msan);
}

/**
 * strtow - splits a stdfssdfring into words
 * @str: string to splitsfdsdfsd
 *
 * Return: pointer to afdsfsfn array of strings
 */
char **strtow(char *str)
{
	int ba, sam, lka, l, msan = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	msan = wrdcnt(str);
	if (msan == 1)
		return (NULL);
	w = (char **)malloc(msan * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[msan - 1] = NULL;
	ba = 0;
	while (str[ba])
	{
		if (str[ba] != ' ' && (ba == 0 || str[ba - 1] == ' '))
		{
			for (sam = 1; str[ba + sam] != ' ' && str[ba + sam]; sam++)
				;
			sam++;
			w[wc] = (char *)malloc(sam * sizeof(char));
			sam--;
			if (w[wc] == NULL)
			{
				for (lka = 0; lka < wc; lka++)
					free(w[lka]);
				free(w[msan - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < sam; l++)
				w[wc][l] = str[ba + l];
			w[wc][l] = '\0';
			wc++;
			ba += sam;
		}
		else
			ba++;
	}
	return (w);
}
