#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,temp,n,str[1001];
 printf("Please input the number of numbers:");
 scanf("%d",&n);
 printf("Please input str[1001]:");
 for(i=0;i<n;i++)
  scanf("%d",&str[i]);
 for(i=0;i<n-1;i++)
  for(j=0;j<n-1-i;j++)
   if(str[j]>str[j+1])
   {
    temp=str[j];
    str[j]=str[j+1];
    str[j+1]=temp;
   }
 for(i=0;i<n;i++)
  printf("%d ",str[i]);
 printf("\n");
 return 0;
} 
