#include<stdio.h>
int main()
{int n,i;
 printf("please input a number n(n<1000):\n");
 scanf("%d",&n);
for(i=1;;i+=1)
 { if(n%2==0)
   n=n/2;
  else 
   n=(3*n+1)/2;
if(n==1) break;
} 
printf("%d\n",i);
return 0;
}
