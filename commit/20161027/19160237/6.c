#include <stdio.h>
#include <math.h>

int main(){
     double R1, P1, R2, P2;
     scanf("%lf %lf %lf %lf", &R1, &P1, &R2, &P2);
     double r1 = R1 * cos(P1), p1 = R1 * sin(P1);
     double r2 = R2 * cos(P2), p2 = R2 * sin(P2);
     double A = r1*r2 - p1*p2;
     double B = r1*p2 + r2*p1;
     if (fabs(A) < 0.001) {
         if (fabs(B) < 0.001) {
             printf("0\n");
         } else if(B > 0){
             printf("0.00+%.2fi\n", B);
         } else {
             printf("0.00%.2fi\n", B);
         }
     } else {
         if (fabs(B) < 0.001) {
             printf("%.2f+0.00i\n", A);
         } else if (B > 0) {
             printf("%.2f+%.2fi\n", A, B);
         } else {
             printf("%.2f%.2fi\n", A, B);
         }       
     }
     return 0;
}
	

