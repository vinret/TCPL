#include<stdio.h>
int main()
{
   int n,a=0;
   printf("请输入正整数n(n<1000)");
   scanf("%d",&n);
   
   while (n!=1)
   {
	   if(n%2==0)
	   n=n/2;
      else
      n=(3*n+1)/2;
       a++;
   }
   printf("%d\n",a);
return 0;
}
