#include <stdio.h>
void printf_hex(int a);
int main()
{
int n;
scanf("%d",&n);
printf_hex(n);
return 0;
}
void printf_hex(a)
{
int i=0,k,j;
int b[10];
char c[10];
while(a!=0)
{b[i]=a%16;
a=a/16;
i++;}
for(k=0;k<=i-1;k++)
{if(b[k]>=10&&b[k]<=15)
b[k]=b[k]+55;}
j=0,k=k-1;
while(k>=0)
{if(b[k]<50) c[j]=(char)(b[k]+48);
else {c[j]=(char)b[k];}

j++;
k--;}
for(i=0;i<=j-1;i++)
putchar(c[i]);
}

