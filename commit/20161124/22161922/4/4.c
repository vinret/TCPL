#include<stdio.h>
int is_int_pal(int n);

int main()
{
        int n;
        scanf("%d",&n);

        if (is_int_pal(n)==0)
                printf("回文");
        else
                printf("否");
}

int is_int_pal(int n)
{
      int m,i,j;
      int flag=0;
      int s[100];
      m=n;
      j=0;
      while(n!=0)
      {
              n=n/10;
              j++;
      }
      for(i=0;i<=j-1;i++)
      {
              s[i]=m%10;
              m=m/10;
      }
      for(i=0;i<=j-1;i++)
      {
              if(s[i]!=s[j-i-1])
{
                      flag=1;
                      break;
              }
      }
      return flag;
}

