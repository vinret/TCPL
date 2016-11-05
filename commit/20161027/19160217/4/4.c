#include<stdio.h>
int main()
{
 int n;
 char c;
 scanf("%d %c",&n,&c);
 int m=1;
 while((m+3)*(m+3)/2-1<=n)
  m=m+2;
  for(int i=m;i>0;i=i-2)
   {
    for(int j=0;j<(m-i)/2;++j)
     printf(" ");
    for(int j=0;j<i;++j)
     printf("%c",c);
    printf("\n");
   }
  for(int i=3;i<=m;i=i+2)
  {
   for(int j=0;j<(m-i)/2;++j)
     printf(" ");
   for(int j=0;j<i;++j)
     printf("%c",c);
   printf("\n");
  }
  printf("%d",n-(m+1)*(m+1)/2+1);
 return 0;
}
  
    
