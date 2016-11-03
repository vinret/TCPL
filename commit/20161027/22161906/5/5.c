#include<stdio.h>
int main()
{
    int A,B;
    int n;
    int PA=0,PB=0;
    int DA,DB;
    printf("Please input A DA B DB:");
    scanf("%d %d %d %d",&A,&DA,&B,&DB);
    while(A!=0)
    {
      if(A%10==DA)
      PA=PA*10+DA;
      A=A/10;
    }
    while(B!=0)
    {
      if(B%10==DB)
      PB=PB*10+DB;
      B=B/10;
    }
    n=PA+PB;
    printf("%d\n",n);
     return 0;
}

