#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char c[100001];
    gets(c);
    int n=0;
    for(int i=0;i<strlen(c);i++)
    {
      if(tolower(c[i])>='a'&&tolower(c[i])<='z')
        n+=(tolower(c[i])-'a'+1);
    }
    int a=0,b=0;
    while(n)
    {
      if(n&1)
        b++;
      else
        a++;
      n/=2;
    }
    printf("%d %d\n",a,b);
    return 0;
}

