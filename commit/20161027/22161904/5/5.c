#include<stdio.h>
#include<math.h>
int main()
{
    long int A,B,PA=0,PB=0;
    int DA,DB,i=0,j=0;
    scanf("%ld %d %ld %d",&A,&DA,&B,&DB);
    while(A!=0)
    {
       if(A%10==DA) 
          A=A/10;
          i++;
          PA+=DA*pow(10,i-1);
    }
    while(B!=0)
    {
       if(B%10==DB)
          B=B/10;
          j++; 
          PB+=DB*pow(10,j-1);
    }
    printf("%ld\n",PA+PB);
    return 0;
}
