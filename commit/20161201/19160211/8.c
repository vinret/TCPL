#include <stdio.h>
int main()
{
  int a[5]={1,4,3,5,2},i,j,r;
  for(i=0;i<4;i++)
{
   for(j=0;j<5;j++)
  {
    if(a[j]>a[j+1])
   {
     r=a[j];
     a[j]=a[j+1];
     a[j+1]=r;
   }
  };
};
for(i=0;i<5;i++)
printf("%d ",a[i]);
printf("\n");
return 0;
}
