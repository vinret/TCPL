#include<stdio.h>
int LCM(int m, int n);

int LCM(int m, int n)
{ 
int i,k;
if (m>=n)
i=m;
else i=n;
do 
{ i=i+1;
  k=i%m;
 } while (k!=0); 
do 
{ i=i+1;
  x=i%n;
} while(x!=0);
return i;
   }

int main ()
{
int m,n;
scanf("%d,%d", &m,&n);
printf("%d\n", LCM(m,n));
return 0;
}     
