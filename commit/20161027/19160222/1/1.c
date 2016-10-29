#include<stdio.h>

int main()
{
int i,j;
int a[10],b[10];

  for(i=1;i<=9;i++)
     {for(j=1;j<=i;j++)
        {printf("%d*%d=%-5d",i,j,j*i);}
      printf("\n");
     }
return 0;
}
