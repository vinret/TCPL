#include<stdio.h>
#include<string.h>
int is_int_pal(int n,int i);
int main()
{
		int n;
		printf("请输入一个整数: ");
		scanf("%d",&n);
		int m=n;
		int i=1,temp;
		while(n!=0)
		{
				temp=n%10;
				n/=10;
				i++;
		}
		if(is_int_pal(m,i))
				printf("%d不是回文数.\n",m);
		else
				printf("%d是回文数.\n",m);
		return 0;
}

int is_int_pal(int n,int i)
{
		char str[i+1];
		int k=0;
		while(n!=0)
		{
				str[k]=n%10;
				k++;
				n/=10;
		}
		int j,flag=0;
		for(i=0,j=k-1;j>i;i++,j--)
				if(str[i]!=str[j])
				{
						flag=-1;
						break;
				}
		return flag;
}
