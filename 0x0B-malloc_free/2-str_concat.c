#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if zero and pointer to concatenated string otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for (k = 0; k < i; k++)
	{
		if (*s1)
			p[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		if (*s2)
			*(p + k + l) = s2[l];
	}
	return (p);
}
