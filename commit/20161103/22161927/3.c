#include <stdio.h>
int main()
{
int A,B,D,H,j=0;
char a[10];
printf("输入A，B，D(0<D<=10)");
scanf("%d%d%d",&A,&B,&D);
H=A+B;
while(H!=0)
{int t;
t=H%D;
a[j]=(char)(48+t);
H=H/D;
j++;}
while(j>=0)
{printf("%c",a[j]);
j--;}
return 0;
}

