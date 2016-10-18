#include <stdio.h>
int main()
{
 int n,flag;
 printf("please input n: ");
 scanf("%d", &n);
 flag=n&1;
 printf("%d\n",flag);
 return 0;
}
