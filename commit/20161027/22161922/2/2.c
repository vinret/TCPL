#include<stdio.h>
int main()
{
        int i,num,a=0;
        printf("请输入一个大于1的正整数:");
        scanf("%d",&num);
    
        for (i=2;i<num;i++)
        {
          if (num%i==0)
             {
               a++;
               }
              if (a==0)
               printf("这个正整数是质数\n");
                
                else
                printf("这个正整数不是质数\n");
                return 0;
                }
}
