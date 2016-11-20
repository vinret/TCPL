#include<stdio.h>
void print_hex(int a);
int main()
{
int a;
scanf("%d",&a);
print_hex(a);
return 0;
}

void print_hex(int a)
{
int c[100],i;
for(i=0;a!=0;i++)
{
c[i]=a%16;
a/=16;
}
for(i=i-1;i>=0;i--)
printf("%d",c[i]);
printf("\n");
}
