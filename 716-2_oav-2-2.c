#include <stdio.h>

int main()
{
 long int n=0,o=0,z=0;
 char p;
 int perv=0;
 scanf("%li",&n);
 for(long int i=0; i<=n; i++)
 { 
  scanf("%c",&p);
  if((i==1)&&(p==')'))
  {
   perv=1;
  };
  if(p=='(')
  {
   o++;
  };
  if(p==')')
  {
   z++;
  };
  };
 if((o==z)&&(perv==0))
 {
  printf("1\n");
 }
 else printf("0\n");
 return 0;
}
