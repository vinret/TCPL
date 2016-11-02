#include <stdio.h>
int main()
{
        int input,output;
        int a,b,c;

        scanf("%d",&input);

        a=input%10;
        c=input/100;
        b=(input-c*100)/10;
        output=a*100+b*10+c;

        printf("%d\n",output);

        return 0;
}
