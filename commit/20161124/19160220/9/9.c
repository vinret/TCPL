#include <stdio.h>
void rank(int *a)
{int i,j,n=4,temp;
 for(i=0;i<n-1;i++)
   for(j=0;j<n-1-i;j++)
     if(a[j]>a[j+1])
     {temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;}
}
int Kaprekar(int n)
{int i=0;
 int a[4];
 while(i<4)
   {a[i]=n%10;
    n=n/10;
    i++;}
 rank (a);
 if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]) 
  {printf("%d%d%d%d - %d%d%d%d = 0000\n",a[0],a[0],a[0],a[0],a[0],a[0],a[0],a[0]);
   n=6174;}
 else
   {n=(a[3]*1000+a[2]*100+a[1]*10+a[0])-(a[0]*1000+a[1]*100+a[2]*10+a[3]);
    int b[4],j=0,m=n;
    while(j<4)
     {b[j]=m%10;
      m=m/10;
      j++;}
    printf("%d%d%d%d - %d%d%d%d = %d%d%d%d\n",a[3],a[2],a[1],a[0],a[0],a[1],a[2],a[3],b[3],b[2],b[1],b[0]);}
 return n;}
int main()
{int n;
 printf("Please input a number n:");
 scanf("%d",&n);
 while(n!=6174)
  n=Kaprekar(n);
 return 0;}
