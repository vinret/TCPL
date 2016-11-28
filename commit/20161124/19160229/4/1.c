#include<stdio.h>

int is_int_pal(int n){
	int num[10000],i=0,count=0,mid,j;
	do{
		num[i]=n%10;
		n/=10;
		i++;		
	}while(n>0);
	mid=i/2;
	i--;
	for(j=0;j<mid;j++){
		if(num[j]==num[i-j])
			count++;
	}
	if(count==mid)
		return 0;
	else
		return -1;
}

int main()
{
	int n;
	printf("请输入一个数 ");
	scanf("%d",&n);
	printf("%d\n",is_int_pal(n));
	return 0;
}
