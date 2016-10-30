#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000];
    int  a[256],max,i,t;
    fgets(c,1000,stdin);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]>='a' && c[i]<='z')a[c[i]-'a']++;
        else if(c[i]>='A' && c[i]<='Z')a[c[i]-'A']++;
        else continue;
    }
    
    max=a[0];
    t=0;
    for(i=0,t=0;i<26;i++)
        if(max<=a[i])
        {
            max=a[i];
            t=i;
        }
    printf("%c %d\n",t,max);
    return 0;
}
        




