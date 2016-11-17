#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,b[100],sum;
scanf("%s",a);
for(i=0;i<strlen(a);i++)
sum=sum+((int)a[i]-48);
for(i=0;sum!=0;i++)
{b[i]=sum%10;
sum=sum/10;}
for(i=i-1;i>=0;--i)
{
switch(b[i])
{
case 1:printf("yi");break;
case 2:printf("er");break;
case 3:printf("san");break;
case 4:printf("si");break;
case 5:printf("wu");break;
case 6:printf("liu");break;
case 7:printf("qi");break;
case 8:printf("ba");break;
case 9:printf("jiu");
default:printf("ling");
}
printf("\n");
return 0;
}
}

