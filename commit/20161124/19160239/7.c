#include<stdio.h>
int main()
{
        int num[100],N,M,i,j,a;
        scanf("%d %d",&N,&M);
        for(i=0;i<N;i++)
                scanf("%d",&num[i]);
        for(j=0;j<M;j++){
                a=num[N-1];
                for(i=N-1;i>0;i--)
                        num[i]=num[i-1];
                num[0]=a;
        }
        for(i=0;i<N;i++){
                printf("%d",num[i]);
                if(i!=N-1)
                        printf(" ");
                else
                        printf("\n");
        }
        return 0;
}
