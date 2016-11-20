#include<stdio.h>
int main()
{
        int a,b,c,d,i;
        int t=2;
        char s[100];
        scanf("%d %d %d",&a,&b,&d);
        if(d>a+b)
                printf("%d",a+b);
        else
        {
                s[1]=(a+b)%d;
                c=(a+b)/d;
        while(c!=0)
        {
                s[t]=c%d;
                c=c/d;
                t++;
        }
        for(i=t-1;i>0;i--)
                printf("%d",s[i]);
        }
        return 0;
}

