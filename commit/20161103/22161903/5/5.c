#include<stdio.h>
#include<string.h>
int main()
{
    int  k,N=0;
    char c[100001];
    scanf("%s",c);
    for(k=0;k<strlen(c);k++)
    {
        if(c[k]>='a'&&c[k]<='z') N+=((int)c[k]-96);
        if(c[k]>='A'&&c[k]<='Z')
             N+=((int)c[k]-64);
    }
    int i=0,j=0;
    while (N) {
        if(N%2)  i++;
        else     j++;
        N/=2;
    }
    printf("%d %d\n",j,i);
    return 0;
}
