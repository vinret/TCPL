#include<stdio.h>
main()
{	
int i,j;	
for(i=1;i<=9;i++)//循环计算1~9	
{		
for(j=1;j<=i;j++)//输出数i的i个乘法项		
{			
printf("%d*%d=%d ",i,j,i*j);		
}		
if(i==3)printf("\tThis is the 9*9 table.");//在3的那一行输出This is the 9*9 table.		
printf("\n");//输出换行符	
}
}
