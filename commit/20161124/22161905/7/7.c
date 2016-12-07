#include<stdio.h>
int main()
{
    int N,M,i;
    int s[100];
    scanf("%d %d",&N,&M);

    for(i=0;i<N;i++)    { scanf("%d",&s[i]); }
    for(i=i-1;i>=0;i--) { s[i+M]=s[i]; }
    for(i=0;i<M;i++)    { s[i]=s[N+i]; }
    for(i=0;i<N-1;i++) 
    {
       printf("%d\n",s[i]);
    }
    
    printf("%d\n",s[N-1]);
    return 0;
}
