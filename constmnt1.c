#include <stdio.h>

int
main ()
{
  int m;
  printf ("Enter marks:\n");
  scanf ("%d", &m);
  if (m >= 85)
    printf ("GRADE A");
  else if (m >= 70)
    printf ("GRADE B");
  else if (m >= 55)
    printf ("GRADE C");
  else if (m >= 40)
    printf ("GRADE D");
  else if (m < 40)
    printf ("GRADE F");
  return 0;
}
