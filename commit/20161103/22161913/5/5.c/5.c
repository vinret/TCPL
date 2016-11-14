#include<stdio.h>
#include<string.h>
int main()
{ 
    int i,N=0;
    char c[100000];
    scanf("%s",c);
    for(i=0;i<=strlen(c);i++)
    {
      if(c[i]>='A'&&c[i]<='Z')  N+=((int)c[i]-96);
      if(c[i]>='a'&&c[i]<='z')  N+=((int)c[i]-64);
    }
  int m=0,n=0;
  for(;N;N/=2)
  {
    if(N%2) m++;
    else    n++;
  }
  printf("%d %d\n",m,n);
  return 0;
}

