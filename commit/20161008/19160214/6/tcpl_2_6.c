#include<stdio.h>
int main()
{ unsigned x;
 int p;
  int n;
   unsigned y;
  printf("x=");
  scanf("%o",&x);
  printf("p=");
  scanf("%d",&p);
  printf("n=");
  scanf("%d",&n);
  printf("y=");
  scanf("%o",&y);
   (x&((~0<<(p+1)) | (~(~0<<(p+1-n))))) | ((y&~(~0<<n))<<(p+1-n));
  printf("x=%o",x);
  
 return 0; 
}

