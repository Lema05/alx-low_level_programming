#include "main.h"

/**
 * _memcpy - a function that copies into memory area
 *
 * @dest: the destination to copy to
 * @src: the source to copy from
 * @n: the number of times to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
