#include<stdio.h>
#include<string.h>
void fanyi(int n)
{
   switch(n)
   {
      case 1:printf("yi");break;
      case 2:printf("er");break;
      case 3:printf("san");break;
      case 4:printf("si");break;
      case 5:printf("wu");break;
      case 6:printf("liu");break;
      case 7:printf("qi");break;
      case 8:printf("ba");break;
      case 9:printf("jiu");break;
   }
}
int main()
{
     char a[200];
     int sum=0,i,n;
     scanf("%s",a);
     for(i=0;i<strlen(a);i++)
     {
       sum+=a[i]-'0';
     }
     if(sum>=100)
     {
       n=sum/100;
       fanyi(n);
       printf(" ");
       sum=sum%100;
       if(sum>=10)
       {
         n=sum/10;
         fanyi(n);
         printf(" ");
         sum=sum%10;
         fanyi(sum);
       }
       else
       {
         fanyi(0);
         printf(" ");
         fanyi(sum);
       }
      }
      else if(sum>=10)
      {
        n=sum/10;
        fanyi(n);
        printf(" ");
        sum=sum%10;
        fanyi(sum);
      }
      else fanyi(sum);
      return 0;
}
    
