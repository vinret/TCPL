#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=9;x++)
 {
     for(y=1;y<=9;y++)
   {
      z=x*y;
      printf("%d*%d=%d",x,y,z);
   }
      printf("\n");
 }

}
