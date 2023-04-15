#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from second string
 *
 * Return: 0 if failed, pointer otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int j, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	p = malloc((i * sizeof(char)) + n + 1);
	if (p == NULL)
		return (0);

	for (j = 0; j < i + n; j++)
	{
		if (!(j >= i))
			p[j] = s1[j];
		else
			p[j] = s2[j - i];
	}
	p[j] = '\0';
	return (p);
}
