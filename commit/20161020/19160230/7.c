#include<stdio.h>
int main()
{
                int num_1,num_2;
                scanf("%d",&num_1);
                int bai,shi,ge;
                bai=num_1/100;
                ge=num_1%10;
                shi=(num_1-bai*100-ge)/10;
                num_2=ge*100+shi*10+bai;
                printf("%d\n",num_2);
                return 0;
}

