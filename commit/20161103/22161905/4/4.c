#include<stdio.h>
#include<string.h>
int main()
{
    int m,i,j,k;
    int n[26]={0};
    char ch[1000];
    fgets(ch,1000,stdin);

    for(j=0;j<=25;j++)
    {
       for(i=0;i<=strlen(ch);i++)
       {
       if((int)ch[i]-65==j||(int)ch[i]-97==j)
       n[j]=n[j]+1;
       }
    }
    m=n[0];
    k=0;

    for(j=1;j<=25;j++)
    {
       if(n[j]>m)
       { 
        m=n[j];
        k=j;
       }
    }

    printf("%c %d\n",k+97,m);
    return 0;
}
