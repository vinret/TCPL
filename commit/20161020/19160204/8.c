#include<stdio.h>
int main()
{
 int x,y,i=0;
 int a[i];
 scanf("%d",&x);
 y=x;
 do
 {
 a[i]=x%2;
 x=x/2;
 i++;
 }while(x!=1 && x!=0);
 a[i]=x;
 do
 {printf("%d",a[i]);
  i--;
 }while(i>=0);
 printf(" %o %x\n",y,y);
 return 0;
}
