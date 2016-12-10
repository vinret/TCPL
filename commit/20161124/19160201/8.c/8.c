#include<stdio.h>
int sus(int s);
int main()
{
 int k,M,N,n=0,j,s=1;
 printf("输入整数M，N\n");
 scanf("%d %d",&M,&N);
 M--;
 while(n<M)
{
  s++;
  k=sus(s);
  k++;
 if(k)
 n++;
};
j=0;
 while(n<N)
{
 s++;
 k=sus(s);
 k++;
 if(k)
{ n++;
  j++;
 if(j<10)
 printf("%d ",s);
 else 
{
 printf("%d\n",s);
 j=0;
} };};
return 0;
}

int sus(int s)


{
 int i,r;
 for(i=2;i<s;i++)
 {
  r=s%i;
  if(r==0)
  return -1;
 };
 return 0;
}
