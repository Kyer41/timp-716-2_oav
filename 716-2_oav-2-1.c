#include <stdio.h>
#include <math.h>

int maino()
{
 long int n,c,p;
 c=0;
 scanf("%li",&n);
 for(long int i=1; i<=n; i++)
 {
  scanf("%li",&p);
  if (p>=0)
  {
   c=c+1;
  }
 }
 printf("%li\n", c);

 return 0;
}
