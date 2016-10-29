#include<stdio.h>
#include<math.h>
int main()
{
 float R1,P1,R2,P2;
 float a,b,c,d;
 float A,B;
 scanf("%f%f%f%f",&R1,&P1,&R2,&P2);
 a=R1*cos(P1);
 b=R1*sin(P1);
 c=R2*cos(P2);
 d=R2*sin(P2);
 A=a*c-b*d;
 B=a*d+b*c;
 if(A==0)
 { if(B==0)
   printf("0.00");
   else printf("%.2fi",B);
 }
 else
 { if(B==0)
   printf("%.2f",A);
   else if(B>0) printf("%.2f+%.2fi",A,B);
   else 
    {
       B=fabs(B);
       printf("%.2f-%.2fi",A,B);
    }
}

  return 0;

}




