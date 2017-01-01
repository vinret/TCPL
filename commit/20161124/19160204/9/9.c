#include<stdio.h>
int Kaprekar(int m);

int main()
{
 int m;
 scanf("%d",&m);
 Kaprekar(m);
 return 0;
}

int Kaprekar(int m)
{
 int i,j,a[4],X,Y,temp,n=m;
 for(i=1;i<=4;i++)
 {
  a[i]=m%10;
  m/=10;
 }
 if(a[1]==a[2]==a[3]==a[4])
 {
  printf("%04d - %04d = 0000",n,n);
  return 0;
 }
 else
 {
  for(j=1;j<4;j++)
   for(i=1;i<=4-j;i++)
    if(a[i]<a[i+1])
    {
     temp=a[i];
     a[i]=a[i+1];
     a[i+1]=temp;
    }
  X=1000*a[1]+100*a[2]+10*a[3]+a[4];
  Y=1000*a[4]+100*a[3]+10*a[2]+a[1];
  temp=X-Y;
  printf("%04d - %04d = %04d\n",X,Y,temp);
  if(temp==6174)
   return 0;
  else return Kaprekar(temp);
 }
}
