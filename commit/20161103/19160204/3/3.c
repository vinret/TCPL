#include<stdio.h>
int main()
{
 int i,D,sum[101];
 unsigned long int A,B,C;
 scanf("%ld %ld %d",&A,&B,&D);
 C=A+B;
 if(C==0) printf("0");
 else
 {
  for(i=0;C!=0;i++)
  {
   sum[i]=C%D;
   C=C/D;
  }
  for(i=i-1;i>=0;i--)
   printf("%d",sum[i]);
 }
 printf("\n");
 return 0;
}
