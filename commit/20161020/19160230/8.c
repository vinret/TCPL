#include<stdio.h>
int main()
{
                int x,a[32],i=0;
                int b;
                scanf("%d",&x);
                b=x;
                while(x!=0){
                                a[i++]=x%2;
                                x=x/2;
                }
                for(i--;i>=0;i--)
                                printf("%d",a[i]);
                printf("\n");
                printf("%o\n",b);
                printf("%x\n",b);
}

