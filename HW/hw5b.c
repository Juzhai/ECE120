#include <stdio.h>
int main()
{
  int a,b;
  for (a = 1; a < 3; a ++)
    {
      for (b = 1; b <= 2; b++)
	{
	  printf("%d*%d = %d\n", a, b, a*b);
	}
    }
  return 0;
    }
