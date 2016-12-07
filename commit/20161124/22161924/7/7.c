#include <stdio.h>
int main()
{ 
    int N,M,i;
    scanf("%d %d\n",&N,&M);
    int A[N];
    for(i=0;i<N;i++)
    {  if(i+M<N) scanf("%d",&A[i+M]);
       else 
       { 
          while(i+M-N>=N) M-=N;
          scanf("%d",&A[i+M-N]);
       } 
    }
    for(i=0;i<N;i++)
    printf("%d",A[i]);
    return 0;
}
