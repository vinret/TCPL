#include <stdio.h>
#include <string.h>
void rightshiftone(int *s,int N)
{int t=s[N-1];
 for (int i=N;i>0;--i)
  s[i]=s[i-1];
 s[0]=t;}
void rightshift(int *s,int N,int M)
{while(M--)
  rightshiftone(s,N);}
int main()
{int N,M,s[100];
 printf("Please input N and M:");
 scanf("%d %d",&N,&M);
 int i=0;
 while(i<N)
  {scanf("%d",&s[i]);
   i++;}
 rightshift(s,N,M);
 i=0;
 while(i<N)
  {printf("%d",s[i]);
   if(i<N-1) printf(" ");
   i++;}
 return 0;}

