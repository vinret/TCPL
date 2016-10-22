#include<stdio.h>
int main(){
	int m[5],n,count=0;
	scanf("%d",&n);
	if (n==0){
		printf("0\n");
		return 0;
	}
	while (n!=0){
	 m[count]=n%16;
	 n=n/16;	
	 ++count;	
	}
	for (--count;count>=0;--count)
	   printf("%d",m[count]);
	printf("\n");
	return 0;
}
