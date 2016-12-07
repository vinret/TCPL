#include <stdio.h>
#define N1 100
int main(void)
{
int a[N1];
int b[N1];
int N,M;
int k;
int i;
int m;
scanf("%d%d",&N,&M);
for(i = 0;i < N; i++)
scanf("%d",&a[i]);
k = M%N;
m = N-k;
    for(i = 0; i < k; i++)
{
b[i] = a[m++];
}
for(i = N -1; i >=k ; i--)
{
a[i] = a[i-k];
}
    for(i = 0; i < k; i++)
{
a[i] = b[i];
}
for(i = 0; i < N; i++)
{
if(i == N-1)
printf("%d",a[i]);
else

printf("%d ",a[i]);
}
return 0;
}

