#include<stdio.h>
int main()
{
     int n;
     int a,i;
     printf("Please input a decimal integer.\n");
     scanf("%d",&n);
    
     i=0;
     while(n!=0)
{
     n=n/2;
     i=++i;
}
     int c[i],b=1;
     while(n!=0)
{
     a=n%2;
     n=n/2;
     c[i]=a;
     b=++b;
}
     for(i=i-1;i>0;i--);
     printf("%d",c[i]);
     printf("\n");
     printf("%o,%x\n",n,n);
     return 0;
}
     
     
     
     
     
