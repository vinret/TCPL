#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    for(a=1;a<=9;a++)
   {
     for(b=1;b<=a;b++)
    {
      c=a*b;
      printf("%d*%d=%-3d\n",a,b,c);
    }   
      printf("\n");
    }
      return 0;
}
     
     
      
    
