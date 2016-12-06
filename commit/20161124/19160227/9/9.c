#include<stdio.h>  
int main(int argc,char *argv[])  
{  
    int n,temp;  
    int max,min;  
    int i,j;  
    int arr[4];  
    scanf("%d",&n);  //输入一个数n
    do  
    {  
        max=0;  
        min=0;  
        for(i=0;i<4;i++)  
        {  
            arr[i]=n%10;  
            n=n/10; //将这个数转化为数组arr[]
        }  
        for(i=1;i<4;i++)  
            for(j=0;j<4-i;j++)  
            {  
                if(arr[j]>arr[j+1])  
                {  
                    temp=arr[j];  
                    arr[j]=arr[j+1];  
                    arr[j+1]=temp;  //排序
                }  
            }  
        for(i=0;i<4;i++)  
            min=min*10+arr[i];  //将数组转化为数字
        for(j=3;j>=0;j--)  
            max=max*10+arr[j];// 将数组转化为数字
        n=max-min;  
        printf("%.4d - %.4d= %.4d\n",max,min,n); //打印出来
    }while(n!=6174&&n!=0);  
 
    return 0;  
}  

