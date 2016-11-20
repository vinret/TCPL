#include<stdio.h>
#include<string.h>
int main()
{
   char a[101];
   int sum=0,b[101],i;
   scanf("%s",a);
   for(i=0;i<strlen(a);++i)
     sum=sum+((int)a[i]-48);
   i=0;
   while(sum!=0)
   {
     b[i++]=sum%10;
     sum/=10;
   }
   for(i=i-1;i>=0;i--)
   {
   switch(b[i])
   {
   case 0:printf("ling");break;
   case 1:printf("yi");break; 
   case 2:printf("er");break; 
   case 3:printf("san");break; 
   case 4:printf("si");break; 
   case 5:printf("wu");break; 
   case 6:printf("liug");break; 
   case 7:printf("qi");break; 
   case 8:printf("ba");break; 
   case 9:printf("jiu");break; 
   }
   if(i>0) printf(" ");
     else  printf("\n");
   }
   return 0;
}
       
