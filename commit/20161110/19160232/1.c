#include<stdio.h>
int main()
{
	int T,i,j;
	printf("打印出T行杨辉三角，T=");
	scanf("%d",&T);
	int arr[T][T];
	for(i=0;i<T;i++)
    {
    	arr[i][0]=1;
    	arr[i][i]=1;
    }
    for(i=2;i<T;i++) 
    {
		for(j=1;j<i;j++) 
    	{
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
    for(i=0;i<T;i++)
    {
    	for(j=0;j<=i;j++)   
    		printf("%d ",arr[i][j]); 
  		printf("\n"); 
	}
}
