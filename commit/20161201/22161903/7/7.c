#include<stdio.h>
#define R1 3
#define C1 4
#define R2 4
#define C2 3
int main()
{
	int mA[R1][C1],mB[R2][C2],mC[R1][C2],i,j,a,b;
	printf("请输入矩阵A中的元素，");
	printf("%d*%d:\n",R1,C1);
	for(i=0;i<R1;i++)
		for(j=0;j<C1;j++)scanf("%d",&mA[i][j]);
    printf("请输入矩阵B中的元素，");
	printf("%d*%d:\n",R2,C2);
	for(i=0;i<R2;i++)
		for(j=0;j<C2;j++)scanf("%d",&mB[i][j]); 
    
	for(a=0;a<R1;a++)
		for(b=0;b<C2;b++)mC[a][b]=0;
	
	for(a=0;a<R1;a++)
		for(b=0;b<C2;b++)
		       for(j=0;j<C1;j++)
				   mC[a][b]+=mA[a][j]*mB[j][b];
    printf("答案矩阵C,");
	printf("%d*%d:\n",R1,C2);
    for(a=0;a<R1;a++){
		for(b=0;b<C2;b++)printf("%4d",mC[a][b]);
		printf("\n");
	}
	return 0;
}
