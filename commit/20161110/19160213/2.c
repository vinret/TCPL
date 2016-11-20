#include<stdio.h>

void triangle_judge(int a,int b,int c)
{
printf("please put 3 number a,b,c:\n");
scanf("%d %d %d",&a,&b,&c);

if(a+b>c&&a+c>b&&b+c>a)
{
if(a==b||a==c||b==c)
{
if(a==b&&b==c)
printf("deng bian san jiao xing ");
else 
printf("deng yao san jiao xing ");
}
else 
printf("put tong san jiao xing");
}
else 
printf("error");
}

int main()
{
int a,b,c;
triangle_judge(a,b,c);
printf("\n");
return 0 ;
}
