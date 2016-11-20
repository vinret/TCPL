#include <stdio.h>
#include <math.h>
int main()
{
  int n,a[101];
  printf("输入一自然数n\n");
  scanf("%d",&n);
  int i,j=0;
  for(i=100;i>=0;i--)
  {
     a[j]=n/(pow(10,i));
     n=n-a[j]*(pow(10,i));
     j++;
  }  // 将n各位数字存入数组a中


  int sum=0;
  for(i=0;i<=100;i++)
  sum=sum+a[i];  //计算n各位数字之和，存入sum中
 // printf("%d",sum);

  char * py[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  int b[3];
  for(i=0;i<3;i++)
 { b[i]=sum/(pow(10,2-i));
   sum=sum-b[i]*(pow(10,2-i));
 };
 for(i=0;i<3;i++)
   { for(j=0;j<10;j++)
     if(b[i]==j)
     printf("%s ",py[j]);
   };
  return 0;
}

