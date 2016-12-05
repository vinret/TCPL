#include<stdio.h>
#include<math.h>
int count1_in_bin(int n);
 
int count1_in_bin(int n)
{   int a[8],i;
    int x=0;
    for (i=0;n!=0;i++)
   { 
     a[i]=n%2;
     n=n/2;
   }
   for (i=0;i<=7;i++)
  { if (a[i]==1)
    x=x+1;  }
  return x;
}


 int main()
{   int n;
  scanf("%d", &n);
 printf("%d\n", count1_in_bin(n));
 return 0;
}
      
