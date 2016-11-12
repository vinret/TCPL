#include <stdio.h>
#include<math.h>
int main()
 {
    int n,m;
    char ch;
    printf("Please input  number: \n");
    scanf("%d %c", &n,&ch);
    m=sqrt((n+1)/2);//倒三角的行数
    int i,j,k;
    for(i=m;i>0;i--)//打印倒三角
    {
      for(j=0;j<m-i;j++)
       printf(" ");
      for(j=1;j<=2*i-1;j++)
       printf("%c",ch);
      printf("\n");
    }
    for(i=2;i<=m;i++)//打印下方的正三角
    {
      for(k=0;k<m-i;k++)
        printf(" ");
      for(k=1;k<=2*i-1;k++)
        printf("%c",ch);
      printf("\n");
    }
    int X;//剩余的个数
    X=n-2*m*m+1;
    printf("剩余%d个%c未使用\n",X,ch);
    return 0;
}
