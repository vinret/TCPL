#include<stdio.h>
int main()
{
    int N;
    int i,j,k,n;
    i=1;
    printf("Please input the number of the '*':");
    scanf("%d",&N);
    if(N<7)
      printf("*");
    else
  {
      while(2*i*i-1<=N)
      i++;
  }
      n=i-1;
      for(i=n;i>0;i--)
    {
      for(j=n-i;j>=1;j--)
        printf(" ");
      for(k=2*i-1;k>0;k--)
        printf("*");
        printf("\n");
     }
      for(i=2;i<=n;i++)
     {
      for(j=n-i;j>=1;j--)
        printf(" ");
      for(k=2*i-1;k>=1;k--)
        printf("*");
        printf("\n");
      }
      int a;
      a=N-i*i;
      printf("%d\n",a);
      return 0;
}
       
   
   
 
