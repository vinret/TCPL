//回文数的判断。int is_int_pal(int n); 接受一个整数，若该数回文，返回 0；否则，返回-1.
#include<stdio.h>
int is_int_pal(int n); 
int is_int_pal(int n)
{
    int i,j;
    int a[1000];
    int flag=0;
    while(n!=0)
   {
    a[i]=n%10;
    n=n/10;
    i++;
   }
 for(i=0,j=i-1;i<j;i++,j--)

    if(a[i]!=a[j])
 {
    flag=-1;
    break;
  }
       return flag;

}

int main()
{
    int n;
    printf("请输入n：");
    scanf("%d",&n);
    printf("%d\n",is_int_pal(n) );
    return 0;
}

