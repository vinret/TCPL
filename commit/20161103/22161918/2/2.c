#include<stdio.h>
int main()
{
 int T,i;
 int A[10],B[10],C[10];
 scanf("%d",&T);
 for(i=0;i<T;i++)
   {
     scanf("%d %d %d",&A[i],&B[i],&C[i]);
   } 
 for(i=0;i<T;i++)
   printf("Case #%d: %s\n",i+1,A[i]+B[i]>C[i]?"true":"false");
   
 return 0;
}
