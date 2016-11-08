#include<stdio.h>
#include<math.h>
 main()
{
   int a,b,c,d,e;
   scanf("%d %d %d",&a,&b,&c);


   d=pow(a,b);
   e=d%c;
   printf("%d",e);
  return 0;
}


