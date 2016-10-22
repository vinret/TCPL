#include<stdio.h>
void main()
{  
  int a=0,i,k,z;
         int  b[32];
  printf("请输入一个十进制整数：");
  scanf("%d",&i);
  z=i;
  while(i!=0)
  {
    k=i%2;
    b[a++]=k;
    i=i/2;
  }
printf("二进制为：");  
 while(a>0)
 {
   printf("%d",b[--a]);
 }

printf("    八进制为：%o    十六进制为：%x\n",z,z);

}
