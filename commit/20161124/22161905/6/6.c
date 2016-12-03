#include<stdio.h>
int count1_in_bin(int n)
{
    int i=0;

    while(n>0)
    {
        if((n&1)==1) i++;
        n=n>>1;
    }
    return i;
}
int main()
{
    int n;
    printf("Please input one int number:");
    scanf("%d",&n);
    printf("There are %d 1 in its binary number.\n",count1_in_bin(n));
  
    return 0;
}
