#include <stdio.h>
int main()
{
int n;
char c;
printf("Please input number n and sign c:");
scanf("%d %c",&n,&c);
int m=1;
while((m+3)*(m+3)/2-1<=n)
m+=2;
for(int i=m;i>0;i-=2)
{for (int j=0;j<(m-i)/2;++j)
 printf(" ");
 for (int j=0;j<i;++j)
 printf("%c",c);
 printf("\n");
}
for(int i=3;i<=m;i+=2)
{for(int j=0;j<(m-i)/2;++j)
 printf(" ");
 for(int j=0;j<i;++j)
 printf("%c",c);
 printf("\n");
}
printf("%d\n",n-(m+1)*(m+1)/2+1);
return 0;
}
