nclude<stdio.h>

#include<math.h>
int main()
{
    int i,k,m;
    printf("请输入n(n>3):");
    scanf("%d",&i);
    k=sqrt(i);
    for(m=2;m<=k;m++)
    { 
       if(i%m==0) 
        break;
    }
    if(m>k)
       printf("%d是素数",i);
    else 
       printf("%d不是素数",i);
    return 0;
}
