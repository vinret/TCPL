#include<stdio.h>
#include<time.h>
int main()
{
    clock_t start_clock,end_clock;
    double  elapsed_time;

    start_clock = clock();
    
    int n,i;
    printf("Please input n(n>3):");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
        if(n%i==0) break;
    if(i<n)
        printf("%d isn't the prime\n",n);
    else
        printf("%d is the prime\n",n);
    
    end_clock = clock();
    elapsed_time=(double)(end_clock-start_clock)/CLOCKS_PER_SEC;
    printf("%.6lf\n",elapsed_time);
    
    return 0;
}
