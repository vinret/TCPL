//二进制中1的个数
#include<stdio.h>
int count1_in_bin(int n)
{
    int count=0;
    if(n==0)
       count=0;
    else
   { while(n!=0)
    {
       if((n&1)==1) 
          count++;
          n=n>>1;
    }
   }
    return count;
}
int main()
{
    int n,count;
    scanf("%d",&n);
    count=count1_in_bin(n);
    printf("the number of 1 is %d\n",count);
    return 0;
}
     
