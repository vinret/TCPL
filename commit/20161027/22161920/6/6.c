#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    double r1, p1, r2, p2, r, p, rp, vp;      
    scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);  
    r = r1*r2;  
    p = p1 + p2;  
    rp = r*cos(p);  
    vp = r*sin(p);  
    if (rp > 1e-6) {  
        printf("%.2f", fabs(rp));  
    }  
    else  
        printf("-%.2f", fabs(rp));  
    if (vp > 1e-6) {  
        printf("+%.2fi", fabs(vp));  
    }  
    else  
        printf("-%.2fi\n", fabs(vp));  
    return 0;  
}     
