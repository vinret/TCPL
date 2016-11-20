#include<stdio.h>
int main()
{
   int n,i;
   int t=0;
   char s[100];
   char zifu[][15]={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
  
   scanf("%d",&n);
   while(n!=0)
   {
     s[t]=n%16;
     n=n/16;
     t++;
   }
   for(i=t;i>=0;i--)
     printf("%s",zifu[s[i]]);
   return 0;
}

