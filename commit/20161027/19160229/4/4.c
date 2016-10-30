#include<stdio.h>
int main()
{
		int sum,hang,leave,half;
		int n,j,a;
		sum=0;
		a=1;
		char c;
		scanf("%d %c",&n,&c);

		//计算第一行的图形个数a和总共可以使用的最大图形总数，得到剩余的个数leave
		half=(n-1)/2;
		while(sum<=half){
				a=a+2;
				sum=sum+a;
		}
		sum=sum-a;
		a=a-2;
		hang=1;
		leave=n-sum*2-1;

		//绘制图形
		while(a>0){
				//绘制空格
				for(j=1;j<hang;j+=1)
						printf(" ");
				//绘制图案
				for(j=1;j<=a;j++)
						printf("%c",c);
				printf("\n");
				a-=2;
				hang++;
		}
		//调整绘图所需数据
		a+=4;
		hang-=2;
		//绘制下半部分图案，与绘制上半部分相似
		while(hang>0){
				for(j=1;j<hang;j+=1)
						printf(" ");
				for(j=1;j<=a;j++)
						printf("%c",c);
				printf("\n");
				a+=2;
				hang--;
		}

		//判断图形是否全部使用，输出未使用个数
		while(leave!=0){
			printf("%d\n",leave);
		}
		return 0;
}
