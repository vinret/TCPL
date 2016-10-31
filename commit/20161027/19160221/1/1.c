/* print multiplication table */
#include <stdio.h>
int main()
{
int i,j,a;
for(i=1;i<=9;++i)
{
   for(j=1;j<=i;++j)
   {
   printf("%d*%d=%2d ",i,j,a=i*j);
   }
printf("\n");
}
return 0;
}
