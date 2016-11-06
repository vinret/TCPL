#include<stdio.h>
#include<math.h>
int main()
{
int A,B,DA,DB,PA=0,PB=0;
printf("please input A(A>0),B(B<10^10),DA,DB\n");
scanf("%d%d%d%d\n",&A,&B,&DA,&DB);
do {
if( A%10!=DA)
A=A/10;
else if(A%10==DA)
{ DA=A%10;PA=PA*10+DA;A=A/10;}
}while (A/10!=0);

do {
if( B%10!=DB)
B=B/10;
else if(B%10==DB)
{ DB=B%10;PB=PB*10+DB;B=B/10;}
}while (B/10!=0);
printf("PA+PB=%d\n",PA+PB);
return 0;
}                   
