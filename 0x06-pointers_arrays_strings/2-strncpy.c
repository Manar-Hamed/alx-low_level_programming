#include "main.h"

/**
 * _strncpy - Copy highest bytes
 * @dest: buffer string 
 * @src: src  string
 * @n: max no. number
 * Return: pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

