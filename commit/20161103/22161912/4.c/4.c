#include<stdio.h>
#include<string.h>
int main()
{
    int m,i,j,a[128]={0};
    char k,n='a',c[1000];
    gets(c);
    for(i=0;i<=strlen(c);i++)
    {
       if(c[i]>='a'&&c[i]<='z')
       {
          j=(int)c[i];
          a[j]++;
       }
       if(c[i]>='A'&&c[i]<='Z')
       {
          j=(int)c[i]+32;
          a[j]++;
       }
    }
    m=a[(int)n];
    for(k='b';k<='z';k++)
       if(a[(int)k]>m)
       {
          m=a[(int)k];
          n=k;
       }
    printf("%c %d\n",n,m);
    return 0;
}

