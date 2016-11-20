#include<stdio.h>
int main()
{
  char ch[100000];
  fgets(ch,100000,stdin);
  int i,sum=0;
  for(int i=0;ch[i]!='\0';i++)
 {
  if(ch[i]>='A'&&ch[i]<='Z')  ch[i]=ch[i]+32;
  else if(ch[i]>='a'&&ch[i]<'z') ;
       else continue;
  sum=sum+(int)ch[i]-96;
 }
  int j,count0=0,count1=0,x[32];
  for(j=0;sum!=0;j++)
  {
    x[j]=sum%2;
    sum=sum/2;
    if(x[j]==0) count0++;
    else count1++;
  }
  printf("%d %d",count0,count1);
  return 0;
}






