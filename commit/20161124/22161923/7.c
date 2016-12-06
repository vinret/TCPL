#include<stdio.h>
int main()
{
    int M,N,i,k;
    scanf("%d %d",&M,&N);
    int s1[M],s2[M];
    for(i=0;i<M;i++)
      scanf("%d",&s1[i]);
    if(N>M) N=N%M;
    for(i=0;N>0;i++){
        s2[i]=s1[M-N];
        N--;
    }
    for(;i<M;i++){
        s2[i]=s1[N];
        N++;
    }
    for(k=0;k<M;k++){
        printf("%d",s2[k]);
        if(k<M-1)  printf(" ");
        else       printf("\n");
    }
    return 0;
}

