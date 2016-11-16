#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
	int m,i=1,n=2;
	int a[1001];
	for (n=2;i<=1000;n++)
	{
		m=is_prime(n);
		if (m==0){
			a[i]=n;
			i++;
		}
	}
	for (i=100;i<=1000;i++)
	printf("%d\n",a[i]);
	return 0;
}

int is_prime(int n)
{
	int p;
	int k;
	if((n&1)==0&&n>2) return -1;
	else if (n==2) return 0;
	else{
		for(p=3;p<=sqrt(n);p++)
			if(n%p==0) break;
		if (p>sqrt(n))
		return 0;
		else return -1;
	}
}
