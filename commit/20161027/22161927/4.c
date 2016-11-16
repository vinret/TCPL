#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,row,t;
    char a;
    scanf("%d %c",&n,&a);
    row=floor(sqrt((n+1)/2));
    t=n+1-2*row*row;
    i=row;
     while(i>=1)
     {
      j=1;
      while(j<=row-i)
      {printf(" ");
       j++;}
       j=1;
       while(j<=2*i-1)
      {printf("%c",a);
       j++;}
      i--;
      printf("\n");
    }
     i=2;
     while(i<=row)
    {j=1;
     while(j<=row-i)
    {printf(" ");
     j++;}
     j=1;
     while(j<=2*i-1)
     {printf("%c",a);
      j++;}
      i++;
      printf("\n");
     }
  printf("%d\n",t);
  return 0;
}  
