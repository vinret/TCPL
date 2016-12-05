#include<stdio.h>
int regular(int a[])
{
   int i,j;
   for(i=0;i<=3;i++)
   {
      for(j=i+1;j<=3;j++)
      {
         if(a[i]<a[j])
         {
            a[i]=a[i]^a[j];
            a[j]=a[j]^a[i];
            a[i]=a[i]^a[j];
         }
      }
   }
}
int main()
{
   int a[4]={0},x,y,z,i;
   scanf("%d",&z);
   for(i=0;i<=3;i++)
   {
      a[i]=z%10;
      z/=10;
   }
   if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
      printf("%d%d%d%d - %d%d%d%d = 0000\n",a[0],a[1],a[2],a[3],a[0],a[1],a[2],a[3]);
   else
   {
      regular(a);
      while(a[0]*1000+a[1]*100+a[2]*10+a[3]!=7641)
      {
         printf("%d%d%d%d - %d%d%d%d = ",a[0],a[1],a[2],a[3],a[3],a[2],a[1],a[0]);
         x=a[0]*1000+a[1]*100+a[2]*10+a[3];
         y=a[3]*1000+a[2]*100+a[1]*10+a[0];
         a[0]=(x-y)/1000;
         a[1]=(x-y-a[0]*1000)/100;
         a[3]=(x-y)%10;
         a[2]=(x-y-a[3])%100/10;
         printf("%d%d%d%d\n",a[0],a[1],a[2],a[3]);
         regular(a);
      }
   }
   return 0;
}
