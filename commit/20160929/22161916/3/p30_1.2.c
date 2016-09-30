#include<stdio.h>
int main()
{
    char cl='x',c2='z';
    int x1=1, x2=2;
    printf("%d,%d\n",cl,c2);
    printf("%c,%c\n",cl,c2);
    printf("%c,%c\n",'0'+x1, '0'+x2);
    printf("%d,%d\n",'o'+x1, '0'+x2);
    return 0;
}
