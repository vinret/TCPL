#include<stdio.h>
int is_prime(int n)
{
int k;
if(n==2) return 0;
for(k=2;k*k<=n;k++)
{
if(n%k==0) return -1;
else return 0;
} 
}                           
int main()
{
int j,n,i=0,N,M;
scanf("%d %d",&M,&N);
for(n=2;i<=N;n++)
{
j=is_prime(n);
if(j==0&&i<M) i++;
if(j==0&&i<=N&&i>=M)
{i++;
printf("%d ",n);}
if(i==N) break;
}
printf("\n");
}

