#include<stdio.h>
#include<math.h>
int is_prime(int n);

int main()
{
		int n,k,j,i;
		k=i=0;
		n=2;
		while(k<=1000){
				j=is_prime(n);
				if(j==0){
						k++;
						if(k>=100&&k<=1000){      //控制输出的素数的个数
								printf("%5d ",k);
								i++;
								if(i%10==0){
										printf("\n");
								}
						}
				}
				n++;                       //控制没十个数输出换行
		}
		return 0;
}

int is_prime(int n){
		int j,k,i;
		k=(int)sqrt(n);
		for(i=2;i<=k;i++)
				if(n%i==0)
						break;
		if(i>k)
				j=0;
		else
				j=-1;
		return j;
}
