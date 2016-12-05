#include<stdio.h>
int main()
{
int N,M,i;
int a[100];
scanf("%d %d",&N,&M);
printf("please input some numbers\n");
for(i=0;i<N;++i)
scanf("%d",&a[i]);
for(i=N-M;i<=N-1;i++)
printf("%d",a[i]);
for(i=0;i<=N-M-1;i++)
printf("%d",a[i]);
printf("\n");
return 0;
}
