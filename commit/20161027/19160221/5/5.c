#include <stdio.h>
#include <math.h>
int digit(int n,int i)
{
  for(i=0;n>0;++i)
    {
    n=(n/10);
    }
  return i;
}

int count(int m,int f,int i,int g,int n)
{ int w=f,j;
  for(i=0,j=0;j<=w;++j)
    {
    n=(m/pow(10,f));
    if(n==g)
      {++i;m=(m-n*pow(10,f));--f;}
    else
      {m=(m-n*pow(10,f));--f;}
    }
return i;
}

int main()
{
int x,y,a,b;
scanf("%d %d %d %d",&x,&a,&y,&b);
  int i,n=x,d_x=digit(n,i);
  n=y;
  int d_y=digit(n,i);
  int f=d_x,m=x,g=a;
  d_x=count(m,f,i,g,n);
  m=y,g=b,f=d_y,d_y=count(m,f,i,g,n);
int sum=0,w=d_x;
for(i=0;i<w;++i)
  {
  sum=(a*pow(10,i)+sum);
  } 
w=d_y;
for(i=0;i<w;++i)
  {
  sum=(b*pow(10,i)+sum);
  }  
printf("%d\n",sum);
return 0;
}
