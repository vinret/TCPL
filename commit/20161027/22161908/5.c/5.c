#include<stdio.h>
int main()
{
    int A, DA,B,DB;
    int PA,PB;
    scanf("%d%d%d%d",&A,&DA,&B,&DB);
    while(A!=0)
    {
      if(A%10==DA)
    {
        PA=PA*10+DA;
        A=A/10;
    }
      else  A/A=10;
    }
    while(B!=0)
    {
      if(B%10==DB)
     {
       PB=PB*10+DB;
       B=B/10;
    }
      else B=B/10;
    }
      printf("%d\n",PA+PB);
    return 0;
}
    
