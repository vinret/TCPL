#include<stdio.h>
int main()
{
    int num=0,n;
    scanf("%d",&n);
    while(n!=1)
    {
      if(n%2==0) n/=2;
      else n=((3*n+1)/2);
      num++;
    }
    printf("%d\n",num);
    return 0;
}

