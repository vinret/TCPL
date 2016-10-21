#include <stdio.h>
int main(){
	int n;
    scanf("%d",&n);
    int m=n,count=0,a[1000];
    while (m!=0){
    	++count;
    	a[count]=m%2;
    	m=m/2;
	}
	for (;count>=1;--count)
	   printf("%d",a[count]);
    printf(" %o %x\n",n,n);
    return 0;
}
