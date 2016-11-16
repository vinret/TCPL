#include<stdio.h>
#include<string.h>
int main()
{
    char c[100000];
    int i,n;
    gets(c);
    for(i=0;i<=strlen(c);i++)
    {
        if(c[i]>='a'&&c[i]<='z') n+=((int)c[i]-96);
        if(c[i]>='A'&&c[i]<='Z') n+=((int)c[i]-64);
    }
    int j=0,k=0;
    while(n!=0)
    {
        if(n%2!=0) j++;
        else k++;
        n/=2;
    }
    printf("%d %d\n",k,j);
    return 0;
}
    
