#include<stdio.h>
int main()
{
    int A,DA,B,DB,PA=0,PB=0;
    scanf("%d%d%d%d",&A,&DA,&B,&DB);
    while(A)
    {
       if(A%10==DA)
          PA=DA+PA*10;
       A/=10;
    }
    while(B)
    {
       if(B%10==DB)
          PB=DB+PB*10;
       B/=10;
    }
    printf("%d\n",PA+PB);
    return 0;
}
