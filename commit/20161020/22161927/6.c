#include <stdio.h>
int main()
{
        int wrong;
        unsigned int a,b,c;

        scanf("%d",&wrong);

        a=~(~0<<4)&wrong;
        b=(~0<<4&wrong)>>4;

        c=b*10+a;
        printf("%u\n",c);

        return 0;
}
