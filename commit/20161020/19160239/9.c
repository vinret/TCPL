#include<stdio.h>
int main()
{
int a,b;
printf("please input two int\n");
scanf("%d%d",&a,&b);
a=a^b;
b=b^a;
a=a^b;
printf("a=%d,b=%d\n",a,b);
return 0;
}
