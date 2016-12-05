#include<stdio.h>
int is_prime(int n)
{
        int i;
        for (i=2;i<=n/2;i++)
           if(n%i==0)
                return -1;
                        return 0;

}
int main()
{
        int i;
        int t=0;
        int s[10000];
        for(i=2;i<=100000;i++)
         if(is_prime(i)==0)
                  s[t++]=i;


        for(t=99;t<=999;t++)
        printf("%d\t",s[t]);
printf("\n");
return 0;
}
