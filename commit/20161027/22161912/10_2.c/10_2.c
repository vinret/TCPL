#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    clock_t start_clock,end_clock;
    double elapsed_time;
    start_clock=clock();
    for(int i=1;i<=10;i++)
    {
        int n,m,i;
        printf("n=(n>3):");
        scanf("%d",&n);
        m=(int)sqrt(n);
        for(i=2;i<=m;i++)
           if(n%i==0)
              break;
        if(i<=m)
           printf("%d is not prime number\n",n);
        else
           printf("%d is prime number\n",n);
    }
    end_clock=clock();
    elapsed_time=(double)(end_clock-start_clock)/CLOCKS_PER_SEC;
    printf("%.61f",elapsed_time);
    return 0;
}
