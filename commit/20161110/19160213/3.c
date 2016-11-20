#include<stdio.h>

void print_hex(int a)
{
int c[100];
char b[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'}; 
int i=0,j,m,k;
scanf("%d",&a);
while(a!=0)
{
m=a%16;
c[i++]=m;
a=a/16;
}
for(j=i-1;j>=0;j--)
{
k=c[j];
printf("%c",b[k]);
}
}

int main()
{
int a;
print_hex(a);
printf("\n");
return 0;
}
