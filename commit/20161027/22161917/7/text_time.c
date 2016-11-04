#include<stdio.h>
#include<time.h>
int main()
{
    clock_t start_clock,end_clock;
    double  elapsed_time;
 
    start_clock=clock();
 
    long int a,b;
    int      c,i;
    scanf("%ld%ld%d",&a,&b,&c);
    for(i=1;i<=b;i++)
        a*=a;
	printf("%ld\n",a%c);
    
    end_clock=clock();

    elapsed_time=(double)(end_clock-start_clock)/CLOCKS_PER_SEC;
    printf("%.6f\n",elapsed_time);
 
   return 0;
}
