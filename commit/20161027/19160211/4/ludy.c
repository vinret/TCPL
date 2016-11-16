#include<stdio.h>
int main()
{
 int a,n=1,c,d,i,j,k,g;
 char b;
 printf("输入一不大于1000的正整数N与一字符");
  scanf("%d %c",&a,&b);
  if(b<=0||b>1000)
{printf("此数不在定义域内");return 1;}
  for(n=1;(2*n*n-1)<=a;)
  n++;
  n--;
  c=a-(2*n*n-1);
  d=n;
  for(i=1;i<=d;i++)
   {for(j=0;j<i;j++)
    printf(" ");
    for(k=1;k<=(2*n-1);k++)
    printf("%c",b);
    printf("\n");
    n--;
   };
  g=d;
  for(n=2;n<=d;n++)
   {for(j=0;j<g-1;j++)
    printf(" ");
    for(k=1;k<=(2*n-1);k++)
    printf("%c",b);
    g--;
    printf("\n");};
    printf("%d\n",c);
    return 0;
}
  
