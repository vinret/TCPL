#include<stdio.h>
int prime(int n)
{
   int i;
   for(i=2;i<=n-1;i++)
      if(n%i==0)
         break;
   if(i<n)
      return -1;
   else
      return 0;
}
int p2(int m)
{
	int i=2,n=0;
	while(i>0){
			if(prime(i)==0)n++;
			if(m==n)break;
			i++;
	}
	return i;
}
	
int main()
{
	int M,N,i,j=0;
	printf("请输入正整数M,N(M<=N):");
	scanf("%d %d",&M,&N);
   
	i=N-M+1;
	while(i>0){
		j++;
		if(j%10==0) printf("%d\n",p2(M+j-1));
		else printf("%d ",p2(M+j-1));
		i--;
	}
	printf("\n");
	return 0;
}
	
