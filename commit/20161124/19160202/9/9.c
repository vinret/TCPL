#include<stdio.h>
#include<math.h>
int max(int n);
int min(int n);
int main()
{
  int n,a[5], cha;
  scanf("%d",&n);
  if(max(n)==min(n))
  {
    printf("%.4d - %.4d = %.4d",max(n),min(n),max(n)-min(n));
      return 0;
  }
  while(cha!=6174)
  {
    cha=max(n)-min(n);
    printf("%.4d - %.4d = %.4d\n",max(n),min(n),max(n)-min(n));
     n=cha;
  }
  return 0;
}
int max(int n)
{
  int i,j,k=0,a[5],max,sum=0,d,num;
  while(n!=0)
  {
    num=n%10;
    a[k++]=num;   
    n=n/10;  
  }
  for(i=k;i<4;i++)
  {
    a[i]=0;
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<4-i-1;j++)
    {
      if(a[j]<a[j+1])
      {
        max=a[j];
        a[j]=a[j+1];
        a[j+1]=max;
      }
    }
  }
  d=4;
  for(i=0;i<4;i++)
  {
    d--;
    sum=sum+a[i]*pow(10,d);
  }
  return sum;
}
int min(int n)
{
  int i,j,k=0,a[5],min,sum=0,d,num;
  while(n!=0)
  {
    num=n%10;
    a[k++]=num;   
    n=n/10;  
  }
    for(i=k;i<4;i++)
  {
    a[i]=0;
  }
  for(i=0;i<4-1;i++)
  {
    for(j=0;j<4-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        min=a[j];
        a[j]=a[j+1];
        a[j+1]=min;
      }
    }
  }
  d=4;
  for(i=0;i<4;i++)
  {
    d--;
    sum=sum+a[i]*pow(10,d);
  }
  return sum;
  
}

