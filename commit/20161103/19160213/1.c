#include<stdio.h>
#include<string.h>
int main()
{
int a[101],i=0,j=0,s=0,k=0;
char num[100];
char c[10][5]={{"LING"},{"YI"},{"ER"},{"SAN"},{"SI"},{"WU"},{"LIU"},{"QI"},{"BA"},{"JIU"}};

gets(num);
for(i=0;i<strlen(num);i++)
{
a[i]=num[i]-'0';
s=s+a[i];
}
while(s!=0)
{
a[j]=s%10;
s=s/10;
j++;
}
for(k=j-1;k>=0;k--)
printf("%s ",c[a[k]]);
printf("\n"); 
return 0;

}
