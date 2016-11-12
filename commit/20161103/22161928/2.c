#include<stdio.h>
int main()
{
    int i,T,A,B,C;
    long long tmp;
    
    scanf("%d",&T);
    int reault[T];
    for (i=0;i<T;i++)
    {
        scanf("%d%d%d",&A,&B,&C);
        tmp=(long long)A+B;
        if(tmp>C)
          reault[i]=1;
        else 
          reault[i]=0;
    }
    for(i=0;i<T;i++);
    {
        printf("Case #%d: ",i+1);
        if(reault[i])
           printf("ture\n");
        else
           printf("false\n");
    }
    return 0;
}
