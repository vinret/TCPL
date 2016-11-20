	#include <stdio.h>
#include <string.h>
int main()
{
  char in[1000];
  gets(in);
  int number[128]={0};

  int i,j;
  for(i=0;i<strlen(in);++i)
    {
      if(in[i]>='A'&&in[i]<='Z')
        in[i]=in[i]+32;
      for(j=97;j<=122;++j)
        {
          if(j==(int)in[i])
            number[j]=number[j]+1;
        }
    }
  int max=0;
  char ASCII;
  for(i=97;i<=122;++i)
    {
      if(number[i]>max)
        {
          max=number[i];
          ASCII=(char)i;
        }
    }
  printf("%c %d",ASCII,max);
  return 0;
}
