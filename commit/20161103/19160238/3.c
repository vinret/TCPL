#include <stdio.h>
int main()
{
  int A,B,D,s,i,j;
  scanf("%d %d %d",&A,&B,&D);
  s=A+B;
  if(s)
  {
  char c[32];
  for(i=1;s!=0;++i)
      {
      c[i]=s%D;
      s=s/D;
      }
  for(j=i-1;j>0;--j)
  printf("%d",c[j]);
  }
  else
  printf("0");
 return 0;
}
