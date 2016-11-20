#include<string.h>
#include<stdio.h>
int main()
{
   char c[1000];
   int i,j,a[26]={0},b;
   fgets(c,1000,stdin);
   for (i=0;i<strlen(c);i++)
{
   for (j=0;j<=25;j++)
{
   if ((int)c[i]==j+65||(int)c[i]==j+97)
            a[j]=a[j]+1;
}
}
   b=a[0];
   i=0;
   for (j=0;j<25;j++)
{
      if (b<a[j+1])
{
         b=a[j+1];
         i=j+1;
}
}
   printf("%c %d\n",i+97,b);
   return 0;
}
