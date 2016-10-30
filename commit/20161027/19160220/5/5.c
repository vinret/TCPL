#include<stdio.h>
#include<math.h>
int main()
{
  int n1,m1,a,n2,m2,b,sum1,sum2,sum;
  double i,j;
  printf("Please input n1,m1,n2,m2:");
  scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
  i=0;
  while(n1/10!=0)
 {  
  a=n1%10;
  if(a==m1)
  i++;
  n1=n1/10;
 }
  if(n1==m1)
  i++;
  sum1=0;
  while(i>=0)
  {sum1=sum1+m1*pow(10,i-1);
   i--;}
  j=0;
  while(n2/10!=0)
 {  
  b=n2%10;
  if(b==m2)
  j++;
  n2=n2/10;
 }
  if(n2==m2)
  j++;
  sum2=0;
  while(j>=0)
  {sum2=sum2+m2*pow(10,j-1);
   j--;}
  sum=sum1+sum2;
  printf("%d+%d=%d\n",sum1,sum2,sum);
  return 0;
}

