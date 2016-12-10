#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("请输入第一个矩阵的行数与列数（中间以空格隔开）");
    scanf("%d %d",&a,&b);
	printf("请输入第一个矩阵的数值");
	int m[a][b];
	for(e=0;e<a;e++)
		for(f=0;f<b;f++)
			scanf("%d",&m[e][f]);
	printf("请输入第二个矩阵的行数与列数（中间以空格隔开，且行数与上一列数相同）");
	scanf("%d %d",&c,&d);
	printf("请输入第二个矩阵的数值");
	int n[c][d];
    for(e=0;e<c;e++)
      	for(f=0;f<d;f++)
		    scanf("%d",&n[e][f]);
    int z[a][d];
	int x=0;
	for(e=0;e<a;e++)
	for(f=0;f<d;f++)
		{	z[e][f]=x;
			for(g=0;g<b;g++)
				z[e][f]+=m[e][g]*n[g][f];
		}
		for(e=0;e<a;e++)
		{
			for(f=0;f<d;f++)
			printf("%d   ",z[e][f]);
         	printf("\n");
		}
	return 0;
}



