#include<stdio.h>
int main()
{
int i,j,k,n;
printf("please input the number of row :");
scanf("%d", &n);
for (i=1;i<=n;i++)
{   for (j=1;j<=10-i;j++)
      printf(" ");
    for (k=1;k<=2*i-1;k++)
      printf("*");
     printf("\n");
     
}
    return 0;
}
