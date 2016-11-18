#include<stdio.h>
int main()
{
   int A,B,D,sum,i=0,j;
   char d[100];
   scanf("%d %d %d",&A,&B,&D);
   sum = A+B;
   if(!sum)
   {
     printf("0");
   }
   while(sum)
   {
     d[i++]=sum%D+'0';
     sum = sum/D;
   }
   for(j=i-1;j>=0;j--)
   {
     printf("%c",d[j]);
   }
   printf("\n");
   return 0; 
}
