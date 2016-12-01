#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    int f[256];
    gets(s);
    for (int i=0;i<=255;++i)
        f[i]=0;
    for (int i=0;i<strlen(s);++i)
        ++f[(int)s[i]];
    for (char i='A';i<='z';++i)
        f[(int)i+32]+=f[(int)i];
    char n='a';
    int max=f[(int)n];
    for (char i='b';i<='z';++i)
       if (f[(int)i]>max)
       {
         max=f[(int)i];
	 n=i;
       }
       printf("%c %d\n",n,max);
       return 0;
}

