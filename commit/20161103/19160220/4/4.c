#include <stdio.h>
#include <string.h>
int main()
{
  char ch[1000];
  int n[26]={0};
  fgets(ch,1000,stdin);
  int i;
  for(int i=0;ch[i]!='\0';i++)
 {
  if(ch[i]>='A'&&ch[i]<='Z')  ch[i]=ch[i]+32;
  else if(ch[i]>='a'&&ch[i]<'z') ;
       else continue;
 // printf("%c",ch[i]);
 }
  int m;
  for(i=0;ch[i]!='\0';i++)
 {
  m=(int)ch[i]-97;
  n[m]++;
 }
  int max,a;
  for(max=n[0],a=0,m=0;m<=25;m++)
 {
  if(max<n[m])
  { max=n[m];
    a=m; }
 }
 // printf("%d",a);
  printf("%c %d",'a'+a,max);
  return 0;
}

