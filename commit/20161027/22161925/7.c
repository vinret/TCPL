#include<stdio.h>
int main()
{
 long int a,b;
 int c,z;
 scanf("%ld%ld%d",&a,&b,&c);
 
 for(z=1;z<=b;z++)
 a*=a;
 
 printf("a^b mod c=%ld\n",a%c);
 
 return 0;
 
 
}
