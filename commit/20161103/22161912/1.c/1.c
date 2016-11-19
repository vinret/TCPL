#include<stdio.h>
#include<string.h>
int main()
{
    int n=0,i,a[100];
    char c[101];
    gets(c);
    for(i=0;i<strlen(c);i++)
       n+=(int)c[i]-48;
    if(0==n)
       printf("ling\n");
    for(i=0;n;i++)
    {
       a[i]=n%10;
       n/=10;
    }
    for(;i>0;i--)
    {
       switch(a[i-1])
       {
          case 0:printf("ling");break;
          case 1:printf("yi");break;
          case 2:printf("er");break;
          case 3:printf("san");break;
          case 4:printf("si");break;
          case 5:printf("wu");break;
          case 6:printf("liu");break;
          case 7:printf("qi");break;
          case 8:printf("ba");break;
          default:printf("jiu");
       }
       if(i>1)
          printf(" ");
       else
          printf("\n");
    }
    return 0;
}
