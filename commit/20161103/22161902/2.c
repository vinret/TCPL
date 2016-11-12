#include <stdio.h>
int main()
{
int A[10],B[10],C[10],T,i=1,j=0;
scanf("%d",&T);
while(i<=T)
{scanf("%d%d%d",&A[j],&B[j],&C[j]);
j++;
i++;}
j=0,i=1;
while(i<=T)
{if(A[j]+B[j]>C[j])
printf("Case #x:true");
else
printf("Case #x:false");
printf("\n");
i++;
j++;}
return 0;
}

