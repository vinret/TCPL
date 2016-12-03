#include<stdio.h>
int count1_in_bin(int n)
{
    int i=0;
    while(n)
    {
    if(n%2==1)
      {
      i++;
      }
    n=n/2;
    }
    return i;
}

int main()
{
    int m;
    scanf("%d",&m);
    printf("%d\n",count1_in_bin(m));
    return 0;
}
