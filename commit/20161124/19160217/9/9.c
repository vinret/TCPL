#include<stdio.h>
int kaprekar(int m)
{
  int i,j,a[4],max=0,min=0,temp,m1=m;
  for(i=1;i<=4;i++)
  {
    a[i]=m%10;
    m=m/10;
  }
  if(a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]) {printf("%04d - %04d = 0000",m1,m1);return 0;}
 else
 {for(j=1;j<=3;j++)
    for(i=1;i<=4-j;i++)
      if(a[i]<a[i+1])
      {
        int t;
        t=a[i];
        a[i]=a[i+1];     
        a[i+1]=t;
      }
 
  max=1000*a[1]+100*a[2]+10*a[3]+a[4];
  min=1000*a[4]+100*a[3]+10*a[2]+a[1];
   temp=max-min;
    printf("%04d - %04d = %04d\n",max,min,temp);
    if(temp==6174)
      return 0;
  else return kaprekar(temp);}
 
}
int main()
{
  int m;
  scanf("%d",&m);
  kaprekar(m);
  return 0;
}


