#include <stdio.h>
int main()
{
         int n;
         int a, b, c;
         scanf("%d",&n);
         a= n % 10;                        
         b= (n / 10) % 10;            
         c= n / 100;                      
         n= a * 100 + b * 10 + c;
         printf("%d\n",n);  
         return 0;
}

