#include<stdio.h>
int is_prime(int n);
int main()
{
    int n,M,N,i=1,count=0;
    int prime[1001];
    scanf("%d %d",&M,&N);
    int m=M;
    for(n=2;i<=N;n++)
	if(0==is_prime(n)){
    	 prime[i]=n;
	 i++;
	}
    if(M==N){
        printf("%d\n",prime[M]);
	 return 0;
    }
    for(;M<=N;M++){
	printf("%d",prime[M]);
	++count;
        if(count<N-m+1){
        if(count%10) printf(" ");
        else         printf("\n");
        }
        else         printf("\n");
    }    
    return 0;
}
int is_prime(int n) 
{ 
    int i; 
    if (n < 2)  return -1; 
    if (n == 2) return 0; 
    if ((n & 1) == 0)  return -1; 
    for (i = 3; i * i <= n; i += 2) 
    { 
        if (n % i == 0) 
            return -1; 
    } 
    return 0; 
} 
	
