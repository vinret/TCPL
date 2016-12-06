//给定任一个各位数字不完全相同的4位正整数，如果我们先把4个数字按非递增排序，再按非递减排序，然后用第1个数字减第2个数字，将得到一个新的数字。一直重复这样做，我们很快会停在有“数字黑洞”之称的6174，这个神奇的数字也叫Kaprekar常数。
#include<stdio.h>
int main()
{
    int n,i,j;
    int a[4];
    int temp,max,min;
    printf("请输入一个四位数：");
    scanf("%d",&n);
    while(n!=6174 && n!=0)
  {
    for(i=0;i<4;i++)
   {
    a[i]=n%10;
    n=n/10;
   }
    for(i=0;i<4;i++)
    for(j=0;j<3;j++)
   {
     if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
   }
  
    
    max=a[0]+a[1]*10+a[2]*100+a[3]*1000;
    min=a[3]+a[2]*10+a[1]*100+a[0]*1000;
    n=max-min;

    printf("%d-%d=%d\n",max,min,n);
   
}
    return 0;
}
