#include<stdio.h>
int is_prime(int n)
{
int i;
for(i=2;i<=n-1;i++)
if(n%i==0) break;
if(i<n) return 0;
else return i;
}

int main()
{
int M,N,k=1,i,n;
scanf("%d %d",&M,&N);
for(n=2;k<M;n++){
i=is_prime(n);
if(n)
k++;}
for(n=n;k<=N;n++){
i=is_prime(n);

if (i)
{ printf("%d",n);printf(" "); k++;
} }
printf("\n");
return 0;
}

