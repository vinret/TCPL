#include<stdio.h>
int count1_in_bin(int n)
{
        int i=0;
        while(n>0)
        {
                if(n%2==1)
                {
                        n=n/2;
                        i++;
                }
                else
                        n=n/2;
        }
        return i;
}
int main()
{
        int n;
        scanf("%d",&n);
        printf("%d",count1_in_bin(n));
        return 0;
}

