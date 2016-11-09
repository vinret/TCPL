#include<stdio.h>
int main()
{
int i,j,k,n,m;
char c;
scanf("%d %c",&n,&c);
for(i=0;(i*i*2-1)<=n;i++)
{}
i--;
for (j=i;j>=1;j--)
{
for(m=i;m>j;m--)
printf(" ");
for(k=j*2-1;k>=1;k--)
printf("%c",c);

printf("\n");
}
//shang ban bu fen 
int a,b;
for (a=i,b=2;a>1;a--,b++)
{
for (m=a-2;m>0;m--)
printf(" ");
for (k=1;k<=(2*b-1);k++)
printf("%c",c);
printf("\n");
}
//xia bu fen 
int x;
x=(n+1)-2*i*i;
printf("%d\n",x);
//sheng yu shu zi 
return 0;
}

