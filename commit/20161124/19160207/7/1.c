#include<stdio.h>
void reverse(int *a,int m);
void RightShift(int *a,int n,int m);
int main()
{
		int N,M;
		printf("Please input N and M: ");
		scanf("%d %d",&N,&M);
		int a[N];
		int i;
		for(i=0;i<N;i++)
				scanf("%d",&a[i]);
	    RightShift(a,N,M);
        int j=0;
		for(j;j<N-1;j++)
				printf("%d ",a[j]);
		printf("%d",a[N-1]);
        printf("\n");
		return 0;
}

/*1.最后一个用temp保存，前一个赋给后一个，再把最后一个赋给a[0]，完成一次右移；
  2.重复Ｍ次即向右循环M次
  3.M>1时运行超时*/

//3次反转
void Reverse(int *a,int p,int q)
{
		for(;p<q;p++,q--)
		{
				int temp=a[q];
				a[q]=a[p];
				a[p]=temp;
		}
}

void RightShift(int *a,int n,int m)
{
		m%=n;
		Reverse(a,0,n-m-1);   //反转前m个
		Reverse(a,n-m,n-1);  //反转后面
    	Reverse(a,0,n-1);   //整体反转
}
