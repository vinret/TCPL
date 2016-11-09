#include<stdio.h>
int main()
{
    int N,i,j,k,n,m,x,z;
    char c;
    scanf("%d %c",&N,&c);
    for(z=1;;z++)
 {
    n=2*z*z-1;
    if(n>=N) break;
  }
    if(n>N)  {x=2*z-3;  m=N-2*(z-1)*(z-1)+1; }
    else  {x=2*z-1; m=0;}
 
    for(i=1;i<=(x+1)/2;i++)
 {
    for(j=1;j<=i;j++)
      printf(" ");
    for(k=1;k<=x+2-2*i;k++)
      printf("%c",c);
    printf("\n");
 }
    for(i=1;i<=(x-1)/2;i++)
 {
    for(j=1;j<=(x-1)/2+1-i;j++)
      printf(" ");
    for(k=1;k<=2*i+1;k++)
      printf("%c",c);
    printf("\n");   
 }
    printf("%d\n",m);
     return 0;
}
