#include<stdio.h>
int main(){
	int a,b,i=0,j=0,da,db;
	scanf("%d %d %d %d",&a,&da,&b,&db);
    while (a!=0){
    	if (a%10==da) i=i*10+da;
    	a=a/10;
	}
	while (b!=0){
    	if (b%10==db) j=j*10+db;
    	b=b/10;
	}
	printf("%d",i+j);
	return 0;
}


