#include<stdio.h>
int jc(int n)
{
    if(n==0)return 1;
    if(n>0)return n*jc(n-1);
}

int main()
{
	int n,i=0,j;
	printf("请输入要显示的行数(<=20)");
	scanf("%d",&n);

	while(i<n){
                
		for(j=0;j<=i;j++)printf("%d ",jc(i)/(jc(i-j)*jc(j)));
		 printf("\n");
                 j=0;
                 i++;
	}
	return 0;
}
