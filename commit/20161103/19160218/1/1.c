#include<stdio.h>
int main()
{

int m[100],a,b,sum=0,i=0,j=0;
char n[100];
char c[][9]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi"};
    gets(n);
    for(i=0;i<strlen(n);i++)
   {
  
      sum=sum+n[i]-48;  
   }
while(sum!=0)
{
  b=sum%10;
  m[j++]=b;
  sum=sum/10;
}
j--;
printf("%s",c[m[j]]);
j--;
for(;j>=0;j--)
{
 printf(" %s",c[m[j]]);


}
return 0;
}
