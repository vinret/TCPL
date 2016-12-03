#include<stdio.h>
int main()
{
int r,s,t;
int m,j,i;
printf("请输入矩阵a的行数列数和矩阵b的列数：");
scanf("%d%d%d",&r,&s,&t);
int a[r][s];
int b[s][t];
int c[r][t];
printf("请输入矩阵a\n");
for(i=0;i<r;i++){
	for(j=0;j<s;j++){
		scanf("%d",&a[i][j]);
//	printf("a[%d][%d]=%d",i,j,a[i][j]);
	}
}
printf("请输入矩阵b\n");
for(i=0;i<s;i++){
        for(j=0;j<t;j++){
                scanf("%d",&b[i][j]);
//	printf("b[%d][%d]=%d",i,j,b[i][j]);
        }
}
for(i=0;i<r;i++){
        for(j=0;j<t;j++){
		c[i][j]=0;
//	printf("c[%d][%d]=%d",i,j,c[i][j]);
		for(m=0;m<s;m++){
		c[i][j]+=a[i][m]*b[m][j];
}}}
printf("矩阵a和b相乘得到矩阵c为\n");
for(i=0;i<r;i++){
        for(j=0;j<t;j++){
		printf("%d ",c[i][j]);}
	printf("\n");
}
return 0;
}

