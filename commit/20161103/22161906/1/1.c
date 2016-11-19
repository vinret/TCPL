#include<stdio.h>
#include<string.h>
int main()
{
    char c[101];
    int i,sum=0,x[101];
    scanf("%s",c);

    for(i=0;i<strlen(c);i++)
    sum+=((int)c[i]-48);

    for(i=0;sum!=0;i++)
  {
    x[i]=sum%10;
    sum=sum/10;
  }

    for(i=i-1;i>=0;--i)
  {
    switch(x[i])
   {
    case 0:printf("Ling"); break;
    case 1:printf("Yi");   break;
    case 2:printf("Er");   break;
    case 3:printf("San");  break;
    case 4:printf("Si");   break;
    case 5:printf("Wu");   break;
    case 6:printf("Liu");  break;
    case 7:printf("Qi");   break;
    case 8:printf("Ba");   break;
    default:printf("Jiu"); break;
   }
    if(i>0)
       printf(" ");
    else
       printf("\n");
  }     return 0;
}

