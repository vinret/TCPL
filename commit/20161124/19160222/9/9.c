#include<stdio.h>
int max_1(int N);
int min_1(int N);

int max_1(int N)
{
int i,max[4]={0,0,0,0},k,y,sum;
for(i=3;i>=0;i--)
{
max[i]=N%10;
N/=10;
}

for(y=0;y<3;y++)
{
for(i=0;i<3-y;i++)
{
if(max[i]<max[i+1])
{
k=max[i];
max[i]=max[i+1];
max[i+1]=k;
}
}
}
sum=max[0]*1000+max[1]*100+max[2]*10+max[3];
return sum;
}

int min_1(int N)
{
int i,min[4]={0,0,0,0},k,y,sum;
for(i=3;i>=0;i--)
{
min[i]=N%10;
N/=10;
}

for(y=0;y<3;y++)
{
for(i=0;i<3-y;i++)
{
if(min[i]>min[i+1])
{
k=min[i];
min[i]=min[i+1];
min[i+1]=k;
}
}
}
sum=min[0]*1000+min[1]*100+min[2]*10+min[3];
return sum;
}

int main()
{
int N,a,b,i,n[4]={0,0,0,0},A[4]={0,0,0,0},B[4]={0,0,0,0},x,y,z;
scanf("%d",&N);
a=max_1(N);
y=a;
b=min_1(N);
z=b;
for(i=3;i>=0;i--)
{
A[i]=a%10;
a/=10;
}
for(i=3;i>=0;i--)
{
B[i]=b%10;
b/=10;
}
if(y==z) printf("%d%d%d%d-%d%d%d%d=0000\n",A[0],A[1],A[2],A[3],B[0],B[1],B[2],B[3]);
else
while(N!=6174)
{
a=max_1(N);
b=min_1(N);
N=a-b;
x=N;
for(i=3;i>=0;i--)
{
A[i]=a%10;
a/=10;
}
for(i=3;i>=0;i--)
{
B[i]=b%10;
b/=10;
}
for(i=3;i>=0;i--)
{
n[i]=x%10;
x/=10;
}
printf("%d%d%d%d-%d%d%d%d=%d%d%d%d\n",A[0],A[1],A[2],A[3],B[0],B[1],B[2],B[3],n[0],n[1],n[2],n[3]);
}

return 0;
}
