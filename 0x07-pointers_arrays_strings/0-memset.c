#include "main.h"

/**
 * _memset - function that fills the first n bytes of the memory area
 * pointed to by s with constant byte b
 * @s: pointer to char memory
 * @b: value to be filled
 * @n: number of bytes to be filled.
 * Return: Char s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
