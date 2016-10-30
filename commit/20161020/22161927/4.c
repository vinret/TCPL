#include<stdio.h>
int main()
{
    int a,b,c,d;
        int Sum;
        float Average;

        printf("Please enter four integers(a,b,c,d)\n");
        scanf("%d%d%d%d",&a,&b,&c,&d);

        Sum=a+b+c+d;

        printf("Sum=  %d;",Sum);

        (float)(Sum);
        Average=Sum/4.0;

        printf("Average=  %.1f\n",Average);

        return 0;
}
