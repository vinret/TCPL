#include<stdio.h>
int main()
{
   int n,i,j,temp,max,min;
   int a[4];
   scanf("%d",&n);
   if(n!=6174)
   {
   for(i=0;i<4;i++)
   {
     a[i]=n%10;
     n=n/10;
     i++;
   }
   for(i=0;i<4;i++)
   {
     for(j=0;j<4-i;j++)
     if(a[j]>a[j+1])
     {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
     }
   }
     max=a[0]*1+a[1]*10+a[2]*100+a[3]*1000;
     min=a[0]*1000+a[1]*100+a[2]*10+a[3]*1;
     n=max-min;
     printf("%d-%d=%d\n",max,min,n) ;
     i=0;
}
    return 0;
}
        
   
