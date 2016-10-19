#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c;
    float d,x;
    printf("Please input a,b,c,x\n");
    scanf("%d%d%d%f",&a,&b,&c,&x);
    d=fabs(x);
    printf("%d\n",sqrt(d)!=4*a/b*c);

    return 0;
}
