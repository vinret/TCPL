#include<stdio.h>
int main()
{
   int a,b,c,d,x[101],i,k;
   scanf("%d%d%d",&a,&b,&d);
   c=a+b;
   for(i=0;c!=0;++i)
   {
     x[i]=c%d;
     c/=d;
   }
   if(i==0)
     printf("0");

   for(k=i-1;k!=(-1);--k)
     printf("%d",x[k]);
     printf("\n");

   return 0;
}

