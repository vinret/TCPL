#include <stdio.h>   
int main(void)  
{  
   int n, a, b, c;  
   scanf("%d", &n);  
   a = n / 100;  
    b = n % 100 / 10;  
    c = n % 10;  
    printf("%d", 100 * c + 10 * b + a);  
  
    return 0;  
}  

