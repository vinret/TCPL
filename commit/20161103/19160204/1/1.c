#include<stdio.h>
#include<string.h>
int main()
{
 int i,count=0;
 int a[i];
 char str[101];
 scanf("%s",str);
 for(i=0;i<strlen(str);i++)
  count+=((int)str[i]-48);
 for(i=0;count!=0;i++)
  {
   a[i]=count%10;
   count=count/10;
  }
 i--;
 for(;i>=0;i--)
 {
  switch(a[i])
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
    case 9:printf("jiu");break;
   }
  if(i>0)
   printf(" ");
  else printf("\n");
 }
 return 0;
}
