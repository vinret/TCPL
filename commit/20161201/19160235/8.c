#include<stdio.h>
int main()
{
	int i,j,m;
	int a[10];
	printf("请输入10个数:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		for(j=0;j<=9-i;j++)
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
			printf("排序后的10个数：");
			for(i=0;i<10;i++)
				printf("%d",a[i]);
			printf("\n");
			return 0;
}
A
A
A
A
A
A
A
A
A

