#include<stdio.h>
int main()
{
		int i=1,j=1;

		while(i<=9){
			while(j<=i){
					printf("%d*%d=%-3d ",j,i,i*j);
					j++;
			}
			j=1;
			i++;
			printf("\n");
		}

		return 0;
}
