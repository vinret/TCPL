#include<stdio.h>
#include<time.h>

int main()
{
  double start,finish;
  
 start=clock();
  
 int i;
  for( i=1;i<=1000000000;++i);
   int a,b,c,d,e;
   scanf("%d %d %d",&a,&b,&c);

   for(d=1;d<=b/2;d++);
   {
   a*a;
   }
   e=a%c;
   printf("%d",e);
finish =clock();
printf("%f seconds\n",(finish-start)/CLOCKS_PER_SEC);
return 0;
}
