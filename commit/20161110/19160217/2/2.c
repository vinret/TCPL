#include<stdio.h>
void triangle_jungle(int a, int b, int c);
int main()
  {
   int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    triangle_jungle(a, b, c);
    return 0;
   }

void triangle_jungle(int a, int b,int c)
 {
    if(a+b>c&&a+c>b&&b+c>a)
        {
          if(a==b||a==c||b==c)
             {
               if(a==b&&b==c)
               printf("an equilateral triangle\n"); 
               else
               printf("an isosceles triangle\n");
             }
          else
               printf("a formal triangle\n");
        }
    else
      printf("error");  
}



   
