#include<stdio.h>
int main()
{
  int s[100];
  int A,B,D,n,i,j;
  scanf("%d%d%d",&A,&B,&D);
  n=A+B;
  i=0;
  while(n!=0)
  {
    s[i]=n%D;
    n/=D;
    i++;
  }
  for(j=i-1;j>=0;j--)
    printf("%d",s[j]);
  printf("\n");
  return 0;
}
