#include<stdio.h>
int main()
{
int a;
printf("请输入a(a>3):");
scanf("%d",&a);
if(a%2==0)
printf("%d不是素数\n",a);
else
printf("%d是素数\n",a);
return 0;
}




