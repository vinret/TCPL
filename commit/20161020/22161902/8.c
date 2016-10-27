#include <stdio.h>
#include <stdlib.h>
int main()
{
int a;
char b[32];
scanf("%d",&a);
itoa(a,b,2);
printf("%s,%o,%x\n",b,a,a);
return 0;
}



