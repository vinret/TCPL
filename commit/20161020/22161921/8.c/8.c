#include<stdio.h>
#include<math.h>
int main()
{  int a,b[30];
   int x,i=0;
   scanf("%d%d",&x,&a);
   printf("十六进制为: %x,八进制为:%o\n",x,x);
   while(a!=0)
{
   b[i]=a%2;
   a=a/2;
   i++;
}
   x=i-1;
   for(i=x;i>=0;i--)
   printf("%d",b[i]);
  return 0;   
}
