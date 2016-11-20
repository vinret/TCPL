#include<stdio.h>
char a[10][4]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main(){
	long n,m=0,count=0,f[100];

	scanf("%d",&n);
    while (n){
		m+=n%10;
		n/=10;
	}
	while (m){
		++count;
		f[count]=m%10;
		m/=10;
	}
	while (count>1)
		printf("%s ",a[f[count--]]);
	printf("%s\n",a[f[1]]);
	return 0;
}


