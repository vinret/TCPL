#include<stdio.h>
int main(){
	int n;
	long long a,b,c;
	scanf("%d",&n);
	for (int i=1;i<=n;++i){
	   scanf("%lld%lld%lld",&a,&b,&c);
		printf("Case #%d: %s\n",i,a+b>c?"true":"false");	
	}
	return 0;
}
