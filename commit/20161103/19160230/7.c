#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int);
int main ()
{
	int a=541,s=100;
	while(s<=1000)
{
		if(prime(a))
{
			printf("%d  ",a);
  			s++;
			a++;
}
		else
			a++;
}
}
int prime(int n)
{
	int m;
	for(m=2;m<=sqrt(n);m++)
	{
		if(n%m==0)
			return 0;
	}
	return 1;
}
			
	
 	
