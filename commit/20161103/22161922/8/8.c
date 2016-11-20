#include<stdio.h>
int main()
{       int n;
        int i,s=1;
        int t=1;
        scanf("%d",&n);
        if(n>=13)
                printf("这个我暂时还不会算");
        else
        for(i=1;i<=n;i++)
                s=s*i;
        while(s/10>0)
        {   s=s/10;
                t++;
        }
        printf("%d",t);
             return 0;
}

