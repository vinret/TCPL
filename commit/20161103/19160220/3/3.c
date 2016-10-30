#include <stdio.h>
#include <math.h>
int main()
{
  int A,B,D;
  printf("Please input A,B,D:");
  scanf("%d %d %d",&A,&B,&D);
  int n=0;
  while(A+B>=pow(D,n))
   n++;
  n--;
  int S,y;
  S=A+B;
  if(S==0)
   printf("0");
  else
   {
    while(n>=0)
    {
      y=S/pow(D,n);
      printf("%d",y);
      S=S-y*pow(D,n);
      n--;
    }
   } 
  printf("\n");
  return 0;
}
