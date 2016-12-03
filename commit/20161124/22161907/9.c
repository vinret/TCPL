#include<stdio.h>
int main()
{
int a[4];
int  n,i,j,max,min,k;
scanf("%d", &n);
do
{   for (i=0;i<4;i++)
     {  a[i]=n%10;
       n=n/10;    }
    for (i=1;i<4;i++)
     {  for (j=0;j<4-i;j++)
        {  if (a[j]>a[j+1])
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
        }  
     }
    max=a[0]+a[1]*10+a[2]*100+a[3]*1000;
    min=a[3]+a[2]*10+a[1]*100+a[0]*1000;
    n=max-min;
printf("%d - %d =%d\n", max,min,n);
} while(n!=6174 && n!=0);
   return 0;
}
