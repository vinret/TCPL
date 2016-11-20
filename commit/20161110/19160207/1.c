#include<stdio.h>
int Fac(int n);
void space(int m);
int main()
{
   int n,i,j,k;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {   space(n-i+5);
       for(j=i;j>=0;j--)
       {  k=Fac(i)/(Fac(j)*Fac(i-j));
          printf("%d ",k);  }
       printf("\n"); 
   }
   return 0;
}

int Fac(int n)
{
   if(n==0) return 1;
   else return n*Fac(n-1);
}

void space(int m)
{
   int a;
   for(a=0;a<m;a++)
     printf(" ");
}         
         
