#include <stdio.h>
int main()
{
   int a,b,d;
   printf("输入正整数A，B，D。其中D<=10\n");
   scanf("%d %d %d",&a,&b,&d);
   int c;
   c=(a+b);
   printf("%d\n",c);
   int e[30];
   int i=0,rem;
   do{rem=c%d;
      c=c/d;
      e[i]=rem;
      i++;}
    while(c!=0);
    i--;
   for(i=i;i>=0;i--)
   printf("%d",e[i]);
   printf("\n");
   return 0;
}

