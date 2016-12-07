#include<stdio.h>
int main()
{
    int num[100],i,n,j,temp;
    printf("请输入您想排序的数的个数：");
    scanf("%d",&n);
    printf("请输入您想排序的数：\n");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
        if(num[j]>num[j+1]){
            temp=num[j+1];
            num[j+1]=num[j];
            num[j]=temp;
            }
        }
    }
    printf("排序后的数从小到大为：\n");
    for(i=0;i<n;i++)
        printf("%8d",num[i]);
    printf("\n");
    
	return 0;
}

