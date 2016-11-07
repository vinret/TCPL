#include<stdio.h>
int is_prime(int n);

int main()
{
int m,a=2,i=0;
for(;i<1000;a++){
m=is_prime(a);
if(m==0){
i++;
	if(i>=100){
	printf("%d\t",a);}
}}
printf("\n");
return 0;
}

int is_prime(int n)
{
int i;
for(i=2;i<=n-1;i++)
	if(n%i==0)
	break;
if(i<n)
return -1;
else
return 0;
}
