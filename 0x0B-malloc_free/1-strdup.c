#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as parameter.
 * @str: string
 *
 * Return: NULL if str == NULL and pointer to string otherwise
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *p;

	if (str == NULL)
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc((i + 1) * sizeof(char));

	if (p == NULL)
	{
		return (0);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			*(p + j) = str[j];
		}
		p[j] = '\0';
	}
	return (p);
}
