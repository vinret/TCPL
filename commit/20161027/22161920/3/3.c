#include<stdio.h>
int main()
{
int n,i;
printf("请输入正整数n(1-1000):");
scanf("%d",&n);
if(n>=1&&n<=1000)
{
	for(i=0;n>1;i++)
	
	if(n%2==0){
	n=n/2;}
	else{
	n=(3*n+1)/2;}
}
else{
printf("您输入的n不符合要求\n");
return 0;}
printf("%d\n",i);
return 0;
}
