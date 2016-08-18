/*
 * @author  :  Rajan Khullar
 * @created :  08/14/16
 * @updated :  08/16/16
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "misc.h"

extern bool ieq(int a, int b)
{
  return a == b;
}

extern char * itoa(int x)
{
  int l = snprintf(NULL, 0, "%d", x) + 1;
  char *p = (char*) malloc(l*sizeof(char));
  snprintf(p, l+1, "%d", x);
  return p;
}

extern void join(char *dest, char *a[])
{
  char t[6] = "hello";
  dest = t;
  //strcpy(dest, "this is a string");
}
