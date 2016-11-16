#include<stdio.h> 

int main() 

{

         int n,i=1;

         double A,B,C;

         scanf("%d",&n);

         for(i=1;i<=n;i++)

         {

                  scanf("%lf %lf %lf",&A,&B,&C);

                  if(A+B>C)

                          printf("Case #%d: true\n",i);

                  else

                          printf("Case #%d: false\n",i);

         }

         return 0;

}
