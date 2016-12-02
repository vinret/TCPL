#include<stdio.h>

int main()

{

         int n,i,j,temp,a[100];

         printf("请输入需要排序的数字的个数:");

         scanf("%d",&n);

         for(i=0;i<n;i++)

         {

                  scanf("%d",&a[i]);

         }

         for(j=0;j<n-1;j++)

         {

                  for(i=0;i<n-1-j;i++)

                  {

                          if(a[i]>a[i+1])

                          {

                                   temp=a[i];

                                   a[i]=a[i+1];

                                   a[i+1]=temp;

                          }

                  }

         }

         for(i=0;i<n;i++)

         {

                  printf("%d",a[i]);

                  if(i==n-1)

                          printf("\n");

                  else

                          printf(" ");

         }

         return 0;

}
