#include <stdio.h>
#include <string.h>
int main()
{int sum=0,i=0,k,j=0;
char b[32];
char a[10000];
gets(a);
while(i<strlen(a))
{if(a[i]>='A'&&a[i]<='Z')
{a[i]=(char)((int)(a[i])+32);
i++;}
else
i++;}
i=0;
while(i<strlen(a))
{if(a[i]>='a'&&a[i]<='z')
{sum=sum+(int)(a[i])-96;
i++;}
else
i++;}
while(sum!=0)
{b[j]=sum%2;
sum=sum/2;
j++;}
i=0;
k=0;
for(;j>=1;j--)
{if(b[j-1]==0) i++;
else k++;
}
printf("%d %d\n",i,k);
return 0;
 }
