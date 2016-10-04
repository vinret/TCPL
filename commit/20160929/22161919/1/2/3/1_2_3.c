#include <stdio.h>
#define N 2
#define M N+3
int main()
{
    int a=0256, b=256, c=0x256;
    printf("%d, %d, %d\n", a,b,c);
    printf("%d\n", M*4);
    return 0;
}

#include <stdio.h>
int main()
{
    char c1='x',c2='z';
    int x1=1, x2=2;
    printf("%d,%d\n",c1,c2);
    printf("%c,%c\n",c1,c2);
    printf("%c,%c\n",'0'+x1, '0'+x2);
    printf("%d,%d\n",'0'+x1, '0'+x2);
    return 0;
}
