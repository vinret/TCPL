#include<stdio.h>
#include<math.h>
int main()
{ int a;
  scanf("%d",&a);
  int n=a;
  int i=0,j=0;
  int m=0;
  while (pow(2,i)<=a)
   {i++;}
 
 i=i-1;
 j=i;
  
  while(j>=0)
   { if(n%2==1)  m=m+pow(10,i-j);

    n=n/2;
     
     j--;
   }
  
  printf("%d\n",m);
  printf("%o\n",a);
  printf("%x\n",a);

  return 0;
}
