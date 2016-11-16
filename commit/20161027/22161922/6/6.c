#include<stdio.h>  
#include<math.h>  
//define PI 3.14159265  
  
  
int main()  
{  
    double r1, p1, r2, p2, r, p, rp, vp;  
    int flagr = 0, flagv = 0;  
    scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);  
    r = r1*r2;  
    p = p1 + p2;  
    rp = r*cos(p);  
    vp = r*sin(p);  
    if (rp > -1e-2) {  
        printf("%0.2f", fabs(rp));  
    }  
    else  
        printf("-%0.2f", fabs(rp));  
    if (vp > -1e-2) {  
        printf("+%0.2fi", fabs(vp));  
    }  
    else  
        printf("-%0.2fi", fabs(vp));  
    return 0;  
}  
