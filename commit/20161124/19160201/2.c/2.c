#include<stdio.h>
int main ()
{int p,r,n,m,temp;
 printf("please enter two positive integer numbers n,m:"); 
 scanf("%d %d",&n,&m);
 if (n<m)              
     {temp=n;
      n=m;
      m=temp;                //把大数放在n中, 小数放在m中
     }
 p=n*m;                     //先将n和m的乘积保存在p中, 以便求最小公倍数时用
 while (m!=0)               //求n和m的最大公约数
    {r=n%m;
     n=m;
     m=r;
 }
 printf("HCF=%d\n",n);
 printf("LCD=%d\n",p/n);        // p是原来两个整数的乘积
 return 0;
 } 











