#include<stdio.h>
int main()
{
int D,i;
long int A,B,sum;
char a[64];
printf("please input the three number(A&B<=2^30 -1),(D<=10): ");
scanf("%ld%ld%d",&A,&B,&D);
sum=A+B;
for(i=1;sum!=0;i++){
a[i]=sum%D;sum=sum/D;}
for(i=i-1;i>=1;i--)
 printf("%d",a[i]);
printf("\n");

return 0;
}
