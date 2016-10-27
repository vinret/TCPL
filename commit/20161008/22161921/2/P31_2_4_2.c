#include<stdio.h>
#include<math.h>
int main()
{

     int x=3,a=4,b=5,c=9;
     int y=x*x*x+2*x*x+3*x+1;
     printf("%d\n",y);
     int m=sqrt(fabs(x));
     int n=4*a/(b*c);
     scanf("%d,%d",&m,&n);
     if(m==n)
       printf("%d",m==n);
     else
       printf("%d",m!=n);
     return  0;
}
