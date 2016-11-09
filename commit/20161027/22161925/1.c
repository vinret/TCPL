#include<stdio.h>
int main()
{
    int x=1,y;
   while(x<=9)
  {
    y=1;
    while(y<=x)
    {
         printf("%d*%d=%-5d",y,x,x*y);        
         y++;
    }     
    printf("\n");
    x++;
  }  
    return 0;
}

       
