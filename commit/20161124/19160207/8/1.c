#include<stdio.h>
int is_prime(int n);  //判素数
int main()
{
		int N,M;
//		printf("Please input M and N:");
		scanf("%d %d",&M,&N);
		int prime[10000];
		int num=1,count=0;
		int j=0;
		while(count<N)
		{
				if(is_prime(num))  count++;  //数素数
				if(count>=M && count<=N && is_prime(num))
				{
						prime[j]=num;  //存符合条件的素数
						j++;
				}
				num++;
		}
	//	printf("%d\n",j);
		//按要求输出素数
		int i=0,k;
		while(i<j)
		{
				for(k=0;k<9;k++)
				{
						if(i==j) break;   //去掉最后一行中的0
						printf("%d ",prime[i++]);
				}
				if(i!=j) printf("%d\n",prime[i]);   //防止最后一个打印０
		}
		printf("\n");
		return 0;
}

int is_prime(int n)
{
		int flag=1;
		int i,temp;
		for(i=2;i<n;i++)
		{
				temp=n%i;
				if(temp==0)
				{
						flag=0;
						break;
				}
		}
		return flag;
}
