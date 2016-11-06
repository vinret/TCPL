#include<stdio.h>

#include<math.h>

int main()

 {

     int A,DA,B,DB,a,b,j=0,k=0,n=0,q=0;

          double m,p;

     scanf("%d %d %d %d",&A,&DA,&B,&DB);

          do

          {

         a=A%10;

         A=A/10;

                   if(a==DA)

                   {

                           j++;

                   }

          }

          while(A>0);

          do

          {

                   b=B%10;

                   B=B/10;

                   if(b==DB)

                   {

                           k++;

                   }

          }

          while(B>0);

          for(m=0;m<j;m++)

                   n=DA*pow(10,m)+n;

          for(p=0;p<k;p++)

                   q=DB*pow(10,p)+q;

          printf("%d\n",n+q);

          return 0;

 }
