#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
int j,i,m=0,n;
n=strlen(str);
for(i=0,j=n-1;i<n/2;i++,j--)
{
if(str[i]==str[j]) m++;
}
if(m==n/2) return 0;
else return -1;
}
int main()
{
char str[100];
int k;
scanf("%s",str);
k=is_str_pal(str);
if(k==0) printf("This is the Palindromes\n");
if(k==-1) printf("This is not the Palindromes\n");
return 0;
}
