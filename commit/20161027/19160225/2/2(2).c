#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for (i=2;i<=floor(sqrt(n));i++)
	   if (n%i==0) break;
	if (i<floor(sqrt(n))) printf("%d is not a prime.",n);
	  else printf("%d is a prime.",n);
	return 0;
}

