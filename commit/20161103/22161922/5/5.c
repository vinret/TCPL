#include<stdio.h>
int main()
{
        int n;
        int i=0;
        int j=0;
        char c;
        while(c!='\n')
        {
                scanf("%c",&c);
                if(c>='a'&&c<='z')
                n=n+c-96;
                else if(c>='A'&&c<='Z')
                        n=n+c-64;
        }
        while(n>0)
        {
                i++;
                if (n%2==1)
                {
                        j++;
                n=(n-1)/2;
                }
                else
                        n=n/2;
        }
        printf("%d %d",i-j,j);
        return 0;
}  

