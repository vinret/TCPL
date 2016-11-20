#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
   char a[100000];
   int i,j,c=0;
   gets(a);
   for(i=0;i<strlen(a);i++)
    {  if((a[i]>='A')&&(a[i]<='Z'))
       a[i]=a[i]-64;
       else if((a[i]>='a')&&(a[i]<='z'))
       a[i]=a[i]-96;
       else
      { a[i]=1;
        c++;}
      ;};

   int sum=0;
   for(i=0;i<strlen(a);i++)
    sum=sum+a[i];
   sum=sum-c;
   printf("%d\n",sum);
   i=0;j=0;
   int rem;
   while(sum!=0)
   {
     rem=sum%2;
     sum=sum/2;
     if(rem==0)
     i++;
     else
     j++;};
   printf("%d %d",i,j);
   return 0;
}

