#include<stdio.h>
#include<math.h>
int main ()
{
	float R1,P1,R2,P2,R,P;
	printf("依次给出两个复数的R1, P1, R2, P2:");
	scanf("%f%f%f%f",&R1,&P1,&R2,&P2);
	R=R1*cos(P1)*R2*cos(P2)-R1*sin(P1)*R2*sin(P2);
	P=R1*cos(P1)*R2*sin(P2)+R2*cos(P2)*R1*sin(P1);
	printf("%.2f+(%.2fi)\n",R,P);
	return 0;
}
