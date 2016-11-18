#include<stdio.h>
int  main()
{
     int i,j,a;
     for(i=1;i<=9;i++)
    {
    for(j=1;j<=9;j++)
     {
    if(j<i)
    printf("\n");
    else
      {
        a=i*j;
        printf("%3d*%d=%d",i,j,a);
      }
     }
    }
    printf("\n");
    return 0;
}

   
