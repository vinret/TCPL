#include<stdio.h>
int main()
{
	int i=1,j=1;
    while(j<=9){
	    while(i<=j){
    		printf("%d*%d=%-5d",i,j,i*j);
    		i=i+1;
		}
    printf("\n");
	j++;
	i=1;
	}
    return 0;
    
}
#
