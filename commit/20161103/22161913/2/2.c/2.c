#include<stdio.h>
int main()
{
    int T;
    long long A,B,C;
    scanf("%d",&T);
    int X;
    for(X=1;X<=T;++X)
    {
       scanf("%lld %lld %lld",&A,&B,&C);
       if(A+B>C)
          printf("Case #X:ture\n");
       else
          printf("Case #X:false\n");
    }
    return 0;
}

