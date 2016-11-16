#include<stdio.h>
int main()
{
		int D,i;
		int	a[100];
		unsigned long A,B,sum;
		scanf("%lu %lu %d",&A,&B,&D);
		sum=A+B;
		i=0;
		do{
				a[i]=sum%D;
				sum=sum/D;
				i++;
		}while(sum>0);
		i--;
		for(;i>=0;i--){
				printf("%d",a[i]);
		}
		printf("\n");
		return 0;
}
