#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate 2 strings
 *
 * @s1: is a pointer to the first string
 * @s2: is a pointer to the second string
 * @n: an integer (6) with the limit of what we are going to add to s1
 *
 * Return: pointer to a newlly allocated memory with s1 & s2, NULL if it fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* unsigned int var because we need to compare with n */
	char *strings;
	unsigned int lengths1, lengths2;

	/* task condition if NULL passed, should be treated as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* I go through both strings to find their length */
	for (lengths1 = 0; s1[lengths1] != '\0'; lengths1++)
	{
	}
	for (lengths2 = 0; s2[lengths2] != '\0'; lengths2++)
	{
	}
	/* I am aware of the length of s2,I can evaluate it with the value of n */
	/* and set the task condition */
	if (n > lengths2)
		n = lengths2;
	/* now set the malloc with the lenghts */
	/* n is now equal to lengths2 */
	/* plus 1 because we need to save space for the last '\0' of strings */
	strings = malloc((lengths1 + n + 1) * sizeof(char));
	if (strings == NULL)
		return (NULL);
	/* then add the content of strings to new strings pointer */
	for (lengths1 = 0; s1[lengths1] != '\0'; lengths1++)
		strings[lengths1] = s1[lengths1];
	/* iterate while lengths2 < n so we print only school */
	/* lenghts1 keeps counting while we go through s2 */
	for (lengths2 = 0; lengths2 < n; lengths2++, lengths1++)
	strings[lengths1] = s2[lengths2];
	strings[lengths1] = '\0';
	return (strings);
}
