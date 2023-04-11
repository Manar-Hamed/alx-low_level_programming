#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to newly allocated memory
* @str: string by main
*
* Description: the returned memory allocation has
*	a copy of the string and to be empty
* Return: the pointer or null if string is null
*/

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = str[i];
	return (ptr);
}
