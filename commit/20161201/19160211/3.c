#include <stdio.h>
void fun(int a[],int i,int j)
{
 if(i<j)
 {
  int t=a[i];a[i]=a[j];a[j]=t;
  i++;j--;
  fun(a,i,j);
 }
}
int main()
{
 int x[4]={2,6,1,8},i;
 fun(x,0,3);
 for(i=0;i<4;i++)
 printf("%d,",x[i]);
 return 0;
}
