#include<stdio.h>
#include<time.h>
#include<math.h>
int main()
{
    clock_t start_clock,end_clock:
    double  elapsed_time;

    start_clock=clock();

    int a,b,c,d,i;
    scanf("%d%d%d",&a,&b,&c);
    for(i=1;i<1000000000;i++){
        
    d=pow(a,b);
    printf("%d\n",d%c);
    }

    end_clock=clock();

    elapsed_time=(double)(end_clock-start_clock)/CLOCK_PER_SEC;
    printf("%.6f\n",elapsed_time);

    return 0;
}
