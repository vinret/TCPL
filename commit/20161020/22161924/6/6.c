#include <stdio.h>
int main()
{
    int BCD;
    scanf("%d",&BCD);
    printf("%d\n",BCD%16+BCD/16*10);

    return 0;
}

