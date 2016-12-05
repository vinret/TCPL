#include<stdio.h>
#include<string.h>
int main()
{
int i,sum0=0,sum1=0,n,sum=0;
char s[100000];
fgets(s,100000,stdin);
n=strlen(s)-1;

for (i=0;i<n;i++)
 {(int)s[i];
  if (s[i]>=65 && s[i]<=90)
    sum+=s[i]-64;
  if (s[i]>=97 && s[i]<=122)
    sum+=s[i]-96;
 }

while (sum!=0)
 { if (sum%2==0) 
      sum0+=1;
    else sum1++;
   sum/=2;
 }

printf("%d %d\n",sum0,sum1);
return 0;
}
