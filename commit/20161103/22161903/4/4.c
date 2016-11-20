#include <stdio.h>
#include <string.h>
int main()
{
  char s[1000],ASCII;
  int number[128]={0},i,j,cs=0;
  gets(s);

  for(i=0;i<strlen(s);++i) 
	  if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;                 //把大写变成小写
      
  for(j=97;j<=122;++j)
     for(i=0;i<strlen(s);++i)
		 if(j==(int)s[i]) number[j]=number[j]+1;  //字母出现个数
        
    
  
  for(j=97;j<=122;++j)
    {
      if(number[j]>cs){
          cs=number[j];
          ASCII=(char)j;
        }
  }
  printf("%c %d\n",ASCII,cs);
  return 0;
}

