#include <stdio.h>
int main()
{
  char in;
  int sum=0;
  while((in=getchar())!='\n')
    {
       if(in>='a'&&in<='z') sum+=in-'a'+1;
       if(in>='A'&&in<='Z') sum+=in-'A'+1;
    }
  int j,t=0,f=0;
  for(j=0;sum!=0;++j)
    {
      if(sum%2==1) ++t;
      sum=sum/2;
    }
  f=j-t;
  printf("%d %d",f,t);
  return 0;
}
