#include<stdio.h>
#include<math.h>
int prime(int x);

int main()
{
 int M,N,str[10001],count=0,x,i=1;
 scanf("%d %d",&M,&N);
 for(x=2;count<=N;x++)
 { 
  if(prime(x)==1)
  {
   str[i]=x;
   i++;
   count++;
  }
 }
 for(i=M;i<N;i++)
 {
  if((i-M+1)%10!=0)
   printf("%d ",str[i]);
  else
   printf("%d\n",str[i]);
 }
 printf("%d\n",str[N]);
 return 0;
}

int prime(int x)
{
 int i;
 for(i=2;i<=sqrt(x);i++)
  if(x%i==0) break;
 if(i>sqrt(x)) return 1;
 else return 0;
}
