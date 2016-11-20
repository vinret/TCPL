#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 int sum=0,i=0,n,m=0;
 char s[10000];
 fgets(s,10000,stdin);
 n=strlen(s)-1;
   
 while (i<n)
  {(int)s[i];
   sum=sum+s[i]-48;
   i++;}
 
m=sum;n=1;i=0;
while (sum!=0)
 {sum=sum/10;
  i++;}
i-=1;sum=m;
 while (sum!=0)
 {m=sum/pow(10,i);
  switch(m)
  {
   case 0:printf("ling ");break;
   case 1:printf("yi ");break;
   case 2:printf("er ");break;
   case 3:printf("san ");break;
   case 4:printf("si ");break;
   case 5:printf("wu ");break;
   case 6:printf("liu ");break;
   case 7:printf("qi ");break;
   case 8:printf("ba ");break;
   case 9:printf("jiu ");break;
  }

 sum=sum-m*pow(10,i);
 i--;
}
printf("\n");

return 0;
}

