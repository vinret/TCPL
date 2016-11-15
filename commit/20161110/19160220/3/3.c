#include <stdio.h>
#include <math.h>
void print_hex(int a)
{int i=0,b;
 while(a>=pow(16,i))
   i++;
 i--;
 if(a==0) printf("0");
 else
  {while(i>=0)
   {b=a/pow(16,i);
    if(b<10) printf("%d",b);
    else printf("%c",55+b);
    a=a-b*pow(16,i);
    i--;}
  }
} 
int main()
{int n;
 printf("Please input a number(n):");
 scanf("%d",&n);
 print_hex(n);
 printf("\n");
 return 0;
}
