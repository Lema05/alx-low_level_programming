lude "main.h"

/**
 * _memset - a fuction that fills the memory with a constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill the memory area with
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}#include "main.h"

/**
 * _memset - a fuction that fills the memory with a constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill the memory area with
 *
 * Return: pointer to memory area
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
