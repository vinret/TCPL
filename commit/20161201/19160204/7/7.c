#include<stdio.h>

int main()
{
 int m,n,p,M,N,P;
 int A[101][101],B[101][101],C[101][101];

 printf("Please input M,N,P:\n");
 scanf("%d%d%d",&M,&N,&P);
                   
 printf("Please input A[%d][%d]:\n",M,P);
 for(m=0;m<M;m++)
 {
  for(p=0;p<P;p++)
   scanf("%d",&A[m][p]);
 }

 printf("Please input B[%d][%d]:\n",P,N);
 for(p=0;p<P;p++)
 {
  for(n=0;n<N;n++)
   scanf("%d",&B[p][n]);
 }

 printf("A[%d][%d]*B[%d][%d]=C[%d][%d]:\n",M,P,P,N,M,N);
 for(m=0;m<M;m++)
 {
  for(n=0;n<N;n++)
  {
   C[m][n]=0;
   for(p=0;p<=3;p++) 
    C[m][n]+=(A[m][p]*B[p][n]);
   printf("%d ",C[m][n]);
  }
  printf("\n");
 }

 return 0;
}
