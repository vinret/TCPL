#include<stdio.h>
int main()
{
  int N;
  int i=1;
  int j,k,n;
  char c;
  scanf("%d%*c%c",&N,&c);
  if(N<7)
  printf("%c",c);
  else
    {
    while(i*i-(N+1)/2<=0)
    i++;
    }
     n=i-1;
  for(i=n;i>0;i--)
  {  j=2*i-1;
     k=n-i;

     for(k=k;k>=1;k--)
     printf(" ");
     for(j=j;j>0;j--)
     printf("%c",c);

  printf("\n");
  }
   for(i=2;i<=n;i++)
  {
     j=2*i-1;
     k=n-i;
     for(k=k;k>=1;k--)
     printf(" ");
     for(j=j;j>0;j--)
     printf("%c",c);
     
  printf("\n"); 
  }


 return 0;
}

