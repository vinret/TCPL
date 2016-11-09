#include<stdio.h>
#include<math.h>
int main()
{
int n,i,m;
printf("请输入n(n>3):");
scanf("%d",&n);
m=sqrt(n);
for(i=2;i<=m;i++){
        if(n%i==0){
        printf("%d不是素数\n",n);
        return 0;}}
printf("%d是素数\n",n);
return 0;
}

