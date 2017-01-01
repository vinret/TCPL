#include <stdio.h>
int LCM(int m, int n);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",LCM(m,n));
    return 0;
}
int LCM(int m, int n)
{
    int i,a;
    int max,min;
    (m>n)?(max=m,min=n):(max=n,min=m);
        do{
          i=max%min;
		 max=min;
            min=i;
        }while(i!=0);
		a=m*n/max;
    return a;
}
