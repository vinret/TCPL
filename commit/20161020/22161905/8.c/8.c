#include<stdio.h>
void fun(int b)
{
   if(b==0) return;
   fun(b/2);

   printf("%d",b%2);
}

int main()
{

    int a; 
    printf("请输入一个十进制的数：\n");
    scanf("%d",&a);
    
    fun(a);

    printf("%o %x\n",a,a);
  
    return 0;
}
