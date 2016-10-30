#include<stdio.h>
#include<math.h>
int main()
{
    int N,i,k,j,m,p,q,M;
    char c;
    scanf("%d %c",&N,&c);
    while(pow(i+1,2)/2-1<=N)
    {
       i++;
    }
    i--;
    k=i;
    for(i=1;i<=(k+1)/2;i++)
    {
      for(j=1;j<=i-1;j++)
       printf(" ");
      for(m=1;m<=k+2-2*i;m++)
       printf("*");
      printf("\n");
    }
    for(i=(k+3)/2;i<=k;i++)
    {
      for(p=1;p<=k-i;p++)
       printf(" ");
      for(q=1;q<=2*i-k;q++)
       printf("*");
      printf("\n");
    }
    M=N-(pow(k+1,2)/2-1);
    printf("%d\n",M);
    return  0;
       
}
