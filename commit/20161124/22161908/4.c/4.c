#include<stdio.h>
int is_int_pal(int n);

int is_int_pal(int n)
{
    int i=0,a[100];
    scanf("%d",&n);
    while(n!=0)
    {
      a[i]=n%10;
      n/=10;
      n++;
    }
      if(a[0]==a[i-1])
      return 0;
      else
      return -1;
}
int main()
{
     int n;
     scanf("%d",&n);
     printf("%d\n",is_int_pal(n));
     return 0;
}
     
