#include <stdio.h>
int GCD_recursive(int m, int n);

int main()
{
    int m,n;
    scanf("%d,%d",&m,&n);
    printf("%d\n",GCD_recursive(m,n));
    return 0;
}
int GCD_recursive(int m,int n)
{
if(m<=n)
     {
      if(n%m)
       {
        return GCD_recursive(m,n%m);
        }
      else{
           return m;
          }
      }else{
            return GCD_recursive(m,n);
           }
}
