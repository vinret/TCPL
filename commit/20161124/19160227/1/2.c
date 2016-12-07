#include <stdio.h>
int GCD_iterative(int m, int n);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",GCD_iterative(m,n));
    return 0;
}
int GCD_iterative(int m, int n)
{
    int i;
    int max,min;
    (m>n)?(max=m,min=n):(max=n,min=m);
        do{
          i=max%min;
		 max=min;
            min=i;
        }while(i!=0);
    return max;
}

