#include<stdio.h>
int main()
{
    int i,j,temp;
    int a[10];
  
    printf("Please input ten munbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\n排序前：");
    for(i=0;i<10;i++)
        printf("%d  ",a[i]);
    printf("\n");

    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    printf("排序后：");
    for(i=0;i<10;i++)
        printf("%d  ",a[i]);
    printf("\n");

    return 0;
}
