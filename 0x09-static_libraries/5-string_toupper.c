#include "main.h"

/**
 * string_toupper - changes all lowercase letters to a string of
 * uppercase.
 * @str: string
 *
 * Return: string changed.
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (p);
}
