#include <stdio.h>
int main()
{
 int a[4],i,j,n,b=1000,max=0,min=0,temp,c;
 scanf("%d",&n);
 c=n;
 while(n!=6174)
 {
 for(i=0;i<4;i++)
 {
  a[i]=n/b;
  n=n-(n/b)*b;
  b=b/10;
 }
 if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
    {printf("%d-%d=0000",c,c);
    break;
    }
else
 for(i=0;i<3;i++)
  for(j=0;j<(3-i);j++)
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    temp=0;
   }
 b=1000;
 for(i=0;i<4;i++)
 {
  min=min+b*a[i];
  max=max+b*a[3-i];
  b=b/10;
 }
 for(i=3;i>=0;i--)
    printf("%d",a[i]);
 printf("-");
 for(i=0;i<4;i++)
    printf("%d",a[i]);
 printf("=");
 n=max-min;
     if(n>0&&n<=9)
        printf("000%d\n",n);
    else if(n>9&&n<=99)
        printf("00%d\n",n);
    else if(n>99&&n<=999)
        printf("0%d\n",n);
    else if(n>999)
        printf("%d\n",n);
 max=0;
 min=0;
 b=1000;
 }
 return 0;
}
