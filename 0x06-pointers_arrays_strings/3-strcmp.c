#include <stdio.h>
#include "main.h"
/**
 *_strcmp - starting place
 *@s1: ptr
 *@s2: ptr
 *Description: comp two str
 * Return: int
 **/
int _strcmp(char *s1, char *s2)
{
  int c = 0, r = 0;

  while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0')
    c++;

  if (s1[c] != s2[c])
    r  = s1[c] - s2[c];

  return (r);
}
