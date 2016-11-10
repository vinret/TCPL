#include<stdio.h>
int main(){
	long long a,b,c,ans=1;
	scanf("%Ld%Ld%Ld",&a,&b,&c);
	a%=c;
	while (b){
	 if (b&1) ans=(ans*a)%c;	
	 a=(a*a)%c;
	 b/=2;	
	}
	printf("%Ld",ans);
	return 0;
}
