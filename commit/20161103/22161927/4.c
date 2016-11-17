#include <stdio.h>
#include <string.h>
int main()
{
char c;
char wen[1000];
int z[26]={0};
int i,j,max=0;
gets(wen);
for(j=0;j<26;j++)
{for(i=0;i<strlen(wen);i++)
{if((int)wen[i]-97==j||(int)wen[i]-65==j)
{z[j]=z[j]+1;}
}}
j=0;
while(j<26)
{if(z[j]>max)
{max=z[j];
c=(char)(j+97);
j++;}
else
j++;}
printf("%c %d",c,max);
printf("\n");
return 0;
}
