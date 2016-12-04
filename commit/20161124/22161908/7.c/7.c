#include<stdio.h>
int main()
{
   int N,M;
   scanf("%d%d",&N,&M);
   int i=0,j=0;
   int m;
   int a[100];
   for(i=0;i<N;i++)
   {
     scanf("%d",&a[i]);
   }
     for(j=0;j<M;j++)
    {
     m=a[N-1];
    }
     for(i=N-1;i>0;i--)
    a[i]=a[i-1];
    a[0]=m;
}
   for(i=0;i<N;i++)
   {
     printf("%d",a[i]);
     if(i!=N-1) 
     printf(" ");
     else
     printf("\n");
   }
    return 0;
}
