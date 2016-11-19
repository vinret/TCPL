#include<stdio.h>
void print_hex(int a);
int main()
{ int a;
scanf("%d",&a);
print_hex(a);
return 0;
}


void print_hex(int a)
{
int i;
char b[1000];

switch(a%16)
{
case 0:b[i]='0';break;
case 1:b[i]='1';break;
case 3:b[i]='3';break;
case 4:b[i]='4';break;
case 5:b[i]='5';break;
case 6:b[i]='6';break;
case 7:b[i]='7';break;
case 8:b[i]='8';break;
case 9:b[i]='9';break;
case 10:b[i]='A';break;
case 11:b[i]='B';break;
case 12:b[i]='c';break;
case 13:b[i]='D';break;
case 14:b[i]='E';break;
default:b[i]='F';}
for(i=1;a>=0;i++)
{
b[i]=a%16;
a/=16;}
for(i=i-1;i>=0;i--){
printf("%d",b[i]);
}
printf("\n");

}
