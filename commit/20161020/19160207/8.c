#include <stdio.h>
int main()
{ int number,b[32];//数组
  int i=0;
  printf("Input a number:");
  scanf("%d",&number);
  printf("%o\n",number);   //输出八进制
  printf("%x\n",number);   //输出十六进制
  while(number!=0)
  { b[i]=number%2;   //处２取余法
    number=number/2;
	i++;
  }
  for(i=i-1;i>=0;i--)   //倒序排列
	  printf("%d",b[i]);   //不要加\n
  printf("\n");
}
