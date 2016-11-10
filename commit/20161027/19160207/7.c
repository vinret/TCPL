#include<stdio.h>
int main()
{
    long int a,b,c,p=1,i;
    printf("Please input three numbers: \n");
    scanf("%ld %ld %ld",&a,&b,&c);
    a%=c;
    for(i=1;i<=b;i++)
       p*=a;
    p%=c;   
    printf("%e\n",p);
    return 0;
}
