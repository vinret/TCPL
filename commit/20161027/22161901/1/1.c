#include<stdio.h>
int main()
{
    int i,j,s;
    for(i=1;i<=9;i++)
    {
     for(j=1;j<=9;j++)
     {  if(j<i)printf("  ");
        else{
        s=i*j;
        printf("%d*%d=%d ",i,j,s);
        }
       }
     printf("\n");
     }     
       return 0;
}

