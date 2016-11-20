#include<stdio.h>

int main()
{
int T,i;
scanf("%d", &T);
for ( i = 1; i <= T; i ++ ) {
double a, b, c;
scanf("%lf %lf %lf", &a, &b, &c); 
if ( a + b > c ) {
printf("Case #%d: true\n", i);
} else {
printf("Case #%d: false\n", i);
}
}
return 0;
}
