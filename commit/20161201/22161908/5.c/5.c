#include<stdio.h>
int main()
{
    int num[10];
    int temp;
    int len=sizeof(num)/sizeof(int);
    for(int i=0;i<len-1;i++)
     for(int j=0;j<len-i-1;j++)
      if(num[j]>num[j+1])
      {
         temp=num[j];
         num[j]=num[j+1];
         num[j+1]=temp;
      }
    for(int i=0;i<len;i++)
    {
    printf("%d\t",num[i]);
    }
    printf("\n");
    return 0;
}
