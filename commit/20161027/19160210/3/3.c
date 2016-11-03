#include<stdio.h>
int main()
{
 int a,i=0;
 printf("请输入一个不大于1000的正整数\n");
 scanf("%d",&a);
  while (a!=1)
{
    if (a%2==0)  
       a=a/2;
    else
      a=(3*a+1)/2;
    i++;
}
 printf("%d\n",i);
return 0;
}
