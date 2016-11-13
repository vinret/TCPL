#include <stdio.h>
#include <math.h>
int main()
{
  char c[101];
  printf("Please input a number:");
  scanf("%s",c);
  int i,sum;
  for(i=0,sum=0;c[i]!='\0';i++)
    sum=sum+c[i]-48;
//printf("%d",sum);
  int m=1,sum1=sum;
  while(sum1/10!=0)
 {
  sum1=sum1/10;
  m++;
 }
//printf("%d\n",m);
  int h[m];
  while(m!=0)
 {
  h[m]=sum/pow(10,m-1);
  switch(h[m])
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
   default:printf("ling");
  }
  if(m>1)
  printf(" ");
  int a;
  a=pow(10,m-1);
  sum=sum%a;
  m--;
 }
  printf("\n");
  return 0;
}
