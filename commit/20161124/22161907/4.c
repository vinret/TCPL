#include<stdio.h>
int is_int_pal(int n);

int is_int_pal(int n)
{  int i,a[100];
   i=0;
   for (i=0;n>=0;i++)
   {    a[i]=n%10;
        n=n/10;   }
   if (a[i]==a[i-1])
     return 0;
    else return -1;
}


int main()
{
  int n;
  scanf("%d", &n);
  printf("%d\n", is_int_pal(n));
  return 0;
}
