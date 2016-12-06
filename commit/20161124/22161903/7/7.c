#include<stdio.h>
int main()
{
	int N,M,s[200],i=0,j,m=0;
	scanf("%d %d",&N,&M);
	M=M%N;
	j=M;
	while(i<N){
		scanf("%d",&s[i]);
		i++;
	}
	while(i>0){
		s[i-1+M]=s[i-1];
		i--;
	}
	while(j>0){
		s[j-1]=s[N-1+j];
		j--;
	}
	while(m<N){
	     printf("%d ",s[m]);
		 m++;
	}
	printf("\n");
	return 0;
}
