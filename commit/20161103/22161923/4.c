#include<stdio.h>
#include<string.h>
int main()
{
    char ch='a',n,c[1001];
    int  b[256]={0};
    int  i,max;
    gets(c);
    for(i=0;i<strlen(c);i++)
    {   if(c[i]>='a'&&c[i]<='z')
           ++b[(int)c[i]];
        if(c[i]>='A'&&c[i]<='Z')
           ++b[(int)c[i]+32];
    }
    max=b[(int)ch];
    for(n='b';n<='z';n++){
        if(b[(int)n]>max){ 
           max=b[(int)n]; 
           ch=n;
        }
       
    }
    printf("%c %d\n",ch,max);
    return 0;
}  

