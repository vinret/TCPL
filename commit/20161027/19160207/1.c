#include <stdio.h>
int main()
{
   int i,j,n;
   printf("九九成法表：　\n");
     for(i=1;i<=9;i++)
     {  
       for(j=1;j<=i;j++)//控制行和列;注意j<=i!!!
            printf("%d*%d=%2d\t",i,j,i*j);//对齐   
        printf("\n");
    }
   return 0;
}
