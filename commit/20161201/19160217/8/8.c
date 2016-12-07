#include<stdio.h>
int main()
{
  int i,j,temp,n;
  int a[1001];
  printf("How much numbers do you want to input:\n");
  scanf("%d",&n);
  printf("Please input number:\n");
  for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
  for(i=1;i<=n-1;i++)
   {
       for(j=1;j<=n-i;j++)
           if(a[j]>a[j+1])
              { temp=a[j];a[j]=a[j+1];a[j+1]=temp;}
   }
  for(i=1;i<=n;i++)
     printf("%d ",a[i]);
   printf("\n"); 
return 0;
}
