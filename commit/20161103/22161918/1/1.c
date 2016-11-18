#include<stdio.h>
#include<string.h>
int main()
{
  char c[101],p[][9]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  int a[10];
  int m,n,i,j;
  n=0;
  i=0;
  scanf("%s",c);
  for(m=0;m<strlen(c);m++)
    n+=(int)c[m]-48;
  while(n!=0)
  { a[i]=n%10;
    n/=10;
    i++; }
  for(j=i-1;j>=0;j--)
   { printf("%s ",p[a[j]]);
    if(j==1)
      break;}
    printf("%s",p[a[0]]);
}      
