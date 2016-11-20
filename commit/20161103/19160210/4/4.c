#include<stdio.h>
#include<string.h>
int main()
{
int a[128]={0},max,n,i;
char s[100000];
fgets(s,100000,stdin);
n=strlen(s)-1;
  for(i=0;i<n;i++)
   {(int)s[i];
    if ((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
     a[s[i]]+=1;
   }
 
 max=a[122];n=122;
 for (i=121;i>64;i--)
  if (a[i]>=max)
   {n=i;max=a[i];}
printf("%c %d\n",n,max);
return 0;
}
