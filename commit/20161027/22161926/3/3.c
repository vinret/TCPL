#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y,a;
    printf("请输入正整数n:\n");
    scanf("%d",&n);
    x=1;
    a=3*n+1;
    if(n%2==0)
    {
      do
      { 
         y=n*pow(1/2,x);
         x++; 
      }while(y!=1);      
    }
    else 
    {
       do
       { 
          y=a*pow(1/2,x);
          x++;
       }while(y!=1);   
     }
    printf("%d",x);   
    return 0;
   
}
