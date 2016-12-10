#include<stdio.h>
int main()
{
		int Num[10],i;
		printf("Please input 10 numbers；\n");
		for(i=0;i<10;i++)
				scanf("%d",&Num[i]);
		for(i=0;i<10;i++)
				printf("%d ",Num[i]);
				printf("\n");
		int j;
//冒泡排序
		for(i=0;i<10;i++)
				for(j=1;j<9-i;j++)
						if(Num[j-1]>Num[j])
						{
								int temp=Num[j];
								Num[j]=Num[j-1];
								Num[j-1]=temp;
						}
		for(i=0;i<10;i++)
				printf("%d ",Num[i]);
		printf("\n");
		return 0;
}
