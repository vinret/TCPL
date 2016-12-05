#include<stdio.h>
#include<string.h>
int is_int_pal(int n);

int is_int_pal(int n)
{
    int i,j,a[11];
    for(i=0;n!=0;i++)
    {
      a[i]=n%10;
      n=n/10;
    }
    for(j=0,i=i-1;i>j;j++,i--)
    {
      if(a[j]!=a[i])
        return -1;
    }
    return 0;
}
int main()
{
   int n;
   scanf("%d",&n);
   printf("Returned value is:%d.\n",is_int_pal(n));
   return 0;
}
    
    
    
