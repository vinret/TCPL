#include<stdio.h>
#include<string.h>
int main()
{
  char c[1000];
  int max,i,j,k;
  int n[26]={0};
  gets(c);
  for(j=1;j<=25;j++)
  { 
    for(i=0;i<=strlen(c);i++)
    { 
      if((int)c[i]-65==j||(int)c[i]-97==j) 
         n[j]=n[j]+1;
    }
  }
  max=n[0];
  k=0;
  for(j=1;j<=25;j++)
  {
    if(n[j]>max)   
      max=n[j];
      k=j;
  }
  printf("%c %d\n",k+76,max);
  return 0;
}
