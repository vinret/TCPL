#include<stdio.h>
int is_prime(int n)
{
   int i;
   for(i=2;i<n;i++)
        if(n%i==0) return -1;  //非素数
   return 0;                   //素数
}

int main()
{
   int a=2,b=0;
   while(b<1001){
	   if(is_prime(a)==0){
		   b++;
	   if(b>=100&&b<=1000) printf("%d\n",a);
	   }
	   a++;
   }
printf("\n");
return 0;
}

