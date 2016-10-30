#include<stdio.h>
int main(void)
{
   int a,b,c;

   printf("Input two numbers a= b= \n");
   scanf("%d %d",&a,&b);
   a=a^b;//a+=b,a,b之和放在a中
   b=a^b;//b=a-b,还原a
   a=b^a;//a=a-b,两数之和减去原a
   printf("a=%d \nb=%d \n",a,b);
   return 0;
}
   


