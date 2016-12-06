#include<stdio.h>
void sortN(int*a,int*b,int*c,int*d)
{
   int n[4]={*a,*b,*c,*d};
   int i,j,t;
  for(i=2;i>=0;i--)
{
   for(j=0;j<=i;j++)
{
   if(n[j]<n[j+1])
{
   t=n[j];
   n[j]=n[j+1];
   n[j+1]=t;
}
}
}
*a=n[0];
*b=n[1];
*c=n[2];
*d=n[3];
}
int main()
{
  int n,a,b,c,d,max,min,num;
printf("input n:\n");
scanf("%d",&n);
while(1)
{
  a=n/1000;
  b=n%1000/100;
  c=n%100/10;
  d=n%10;
if(a==b&&b==c&&c==d)
{
  printf("%d%d%d%d-%d%d%d%d=0000\n",a,a,a,a,a,a,a,a);
  break;
}
sortN(&a,&b,&c,&d);
max=1000*a+100*b+10*c+d;
min=1000*d+100*c+10*b+a;
num=max-min;
printf("%d%d%d%d-%d%d%d%d=",a,b,c,d,d,c,b,a);
printf("%d%d%d%d\n",num/1000,num%1000/100,num%100/10,num%10);
if(num==6174)
{   break;}
n=num;
return 0;
}
}
