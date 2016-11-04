#include<stdio.h>
int main()
{
   int n,a,s;
   int h,l,d;
   a=1,s=0;
   char c;
   printf("n=,符号=");
   scanf("%d,%c", &n,&c); 
  int b;
   b=(n-1)/2;
   while (s<=b)
   {   a=a+2;
       s=s+a;
    }
         s=s-a;
         a=a-2;
          h=1;
          l=n-2*s-1;
    while(a>0)
  {   for (d=1;d<h;d++)
       printf(" ");
      for (d=1;d<=a;d++)
      printf("%c\n", c);
      a=a-2;
      h=h+1;
   }
   a=a+4;
   h=h-2;
    while(h>0)
   {  for (d=1;d<h;d++)
       printf(" ");
     for  (d=1;d<=a;d++)
      printf("%c\n", c);
    a=a+2;
    h=h-1;
   }
      while (l!=0)
   {
      printf("%d\n", l);
   }
     return 0;
}
