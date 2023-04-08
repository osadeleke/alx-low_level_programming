#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @src: string
 *
 * Return: string encoded.
 */

char *leet(char *src)
{
	int i;
	char *mpp = "aAeEoOtTlL";
	char *new = "4433007711";
	char *p = src;

	while (*src)
	{
		i = 0;
		while (mpp[i] != '\0')
		{
			if (mpp[i] == *src)
			{
				*src = new[i];
			}
			i++;
		}
		src++;
	}
	return (p);
}
