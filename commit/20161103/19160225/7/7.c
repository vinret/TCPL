#include<stdio.h>
#include<math.h>
int is_prime(int n){
	if (n<=1) return -1;
	for (int i=2;i<=floor(sqrt(n));++i)
	   if (!(n%i)) return -1;
	return 0;
}
int main(){
	int count=0;
	for (int i=0;i<=100000;++i){
		if (!(is_prime(i))) {
		   ++count;
	       if (count>=100) printf("%d:%d ",count,i);
	   }
		if (count==1000){
			printf("\n");
			break;
		}
	}
	return 0;
}

