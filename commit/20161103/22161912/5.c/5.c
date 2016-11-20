#include<stdio.h>
#include<string.h>
int main()
{
    int n=0,i,j=0,k=0;
    char c[100000];
    gets(c);
    for(i=0;i<=strlen(c);i++)
    {
       if(c[i]>='a'&&c[i]<='z')
          n+=c[i]-'a'+1;
       if(c[i]>='A'&&c[i]<='Z')
          n+=c[i]-'A'+1;
    }
    while(n)
    {
       if(n%2)
          j++;
       else
          k++;
       n/=2;
    }
    printf("%d %d\n",k,j);
    return 0;
}
