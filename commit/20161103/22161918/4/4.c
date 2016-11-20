#include<stdio.h>
#include<string.h>
int main()
{
  char c[1000];
  int a[26]={0},m,i,j;
  fgets(c,1000,stdin);
  for(i=0;i<strlen(c);i++)
  { for(j=0;j<26;j++)
    { if((int)c[i]==j+65||(int)c[i]==j+97)
      a[j]+=1;  } }
  i=0;
  m=a[0];
  for(j=1;j<26;j++)
  {  if(m<a[j])
     {  m=a[j];
        i=j; } }
  printf("%c %d",97+i,m);
  return 0;
}
