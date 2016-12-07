#include <stdio.h>
#include <math.h>
int judges(int n)       //判断素数
{int i;
for(i=2;i<=sqrt(n);i++)
{
if(n%i==0) return -1;
}
return 0;
}
int main()
{
int M,N,i=2,j=0,k=0;
printf("please input(M<=N<=1le4): ");
scanf("%d %d",&M,&N);
int sc[N-M+1];
while(j<M)
{
if(judges(i)==0)
{j++;
 i++;}
else i++;
}
i--;
while(j>=M&&j<=N)
{if(judges(i)==0)
{
sc[k]=i;
i++;
j++;
k++;}
else i++;
}
k=0;
for(i=0;i<N-M+1;i++)
{
printf(" %d",sc[i]);
k++;                            //10个循环移动
if(k==10)
{printf("\n");
k=k-10;
}
}
printf("\n");
return 0;
}
