#include <stdio.h>
#include "holberton.h"
/**
 *reverse_array -main point
 *@a: ptr int
 *@n: int
 **/
void reverse_array(int *a, int n)
{
  int i;
  int ch;

 
  n--;

  for (i = 0; i <= n; n--, i++)
    {
      ch = a[i];
      a[i] = a[n];
      a[n] = ch;
    }
}
