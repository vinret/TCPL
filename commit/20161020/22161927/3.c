#include <stdio.h>
int main()
{
        int F,C;

        printf("Please enter the Fahrenheit=  ");
        scanf("%d",&F);

        C=5*(F-32)/9;

        printf("Celcius=  %d\n",C);

        return 0;
}
