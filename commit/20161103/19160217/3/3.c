#include<stdio.h>
int main()
{
      long A,B,sum;
      int D,c[101],i=0; 
      
      scanf("%ld %ld %d",&A,&B,&D);
      sum=A+B;
      while(sum!=0)
          {
             c[++i]=sum%D;
             sum=sum/D;
          }
      if(i==0)
        printf("0");
      while(i)
          printf("%d",c[i--]);
       printf("\n");
     return 0;
}
