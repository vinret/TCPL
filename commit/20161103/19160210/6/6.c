#include<stdio.h>
int Factorial(const int n);
int main()
{ 
int n,nf;
scanf("%d",&n);
nf=Factorial(n);
if (nf) printf("%d!=%d\n",n,nf);
 else printf("Invalid input\n");
return 0;
}

int Factorial(n)
{int i,nf=1;
 if (n>0) 
   for (i=1;i<=n;i++) nf*=i;
 else nf=0;
return nf;
}
