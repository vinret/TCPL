#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	d=a+b;
	int i=1;
	int f[100];
	do{
		f[i]=d%c;
		d/=c;
		i++;
	}while(d>0);
	i--;
	while(i>=1){
	printf("%d",f[i]);
	i--;
}
	return 0;
 } 
