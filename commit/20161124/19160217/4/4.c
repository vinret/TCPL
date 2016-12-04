#include<stdio.h>
int is_int_pal(int n);
int main()
{
 int n,s;
 scanf("%d",&n);
 s=is_int_pal(n);
 printf("%d",s);
 return 0;
}

int is_int_pal(int n)
{
  int n1=n,sum=0;
    while(n)
          {
            sum=sum*10+n%10;
            n=n/10;
          }
             
    if(sum==n1)
       return 0;
     else
        return -1;
}
      

