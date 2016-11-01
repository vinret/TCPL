#include<stdio.h>
int main()
{
  int a,b[64],c,i=0,j;
 printf("请输入一个十进制数");
 scanf("%d",&a);
  c=a;
  while (a!=0) 
{ 
  b[i]=a%2;
a=a/2;
i++;
}
for (j=i-1;j>=0;j--) printf("%d",b[j]);
 printf("\n%o\n%x\n",c,c);
return 0;
}

 
