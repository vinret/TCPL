#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i=0,a[n*3];
for(i=0;i<n*3;i++)
 scanf("%d",&a[i]);
i=0;
 
 while (i<n*3)
  {if (a[i]+a[i+1]>a[i+2])
     printf("case #%d: true\n",(i+3)/3);
   else 
     printf("case #%d: flase\n",(i+3)/3);
 i=i+3;
   }

return 0;
}
