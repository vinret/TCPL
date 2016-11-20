#include<stdio.h>
#include<string.h>
int main()
{
   char c[1001];
   int a[256];
   gets(c);
   for(int i=0;i<=255;i++)
     a[i]=0;
   for(int i=0;i<strlen(c);i++)
     ++a[(int)c[i]];
   for(char i='A';i<='Z';i++)
     a[(int)i+32]+=a[(int)i];
   
   char n='a';
   int max=a[(int)n];
   for(char i='b';i<'z';i++)
       if(a[(int)i]>max)
         {
            max=a[(int)i];
            n=i;
         }
printf("%c %d\n",n,max);
return 0;
}





