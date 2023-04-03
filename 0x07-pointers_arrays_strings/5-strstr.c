#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}

	return (haystack + 1);
}
