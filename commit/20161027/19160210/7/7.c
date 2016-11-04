#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
 printf("请输入a,b,c的值\n");
 scanf("%d%d%d",&a,&b,&c);
  c=(int)pow(a,b)%c;
printf("%d\n",c);
return 0;
}
