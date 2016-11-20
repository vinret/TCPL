#include<stdio.h>
int main()
{
    int t,a,b,c,i=1;
    scanf("%d",&t);

    do
   {
    i++;
    scanf("%d %d %d",&a,&b,&c);

    if((a+b)>c)
         printf("Case#%d:true\n",i-1);
    else
         printf("Case#%d:false\n",i-1);
   }
   while(i<=t);

   return 0;
}

