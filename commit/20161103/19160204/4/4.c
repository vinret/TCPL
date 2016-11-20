#include<stdio.h>
#include<string.h>
int main()
{
 int i=1,j,y,digit[j],max=0;
 char letter[i],x;
 do
 {
  scanf("%c",&x);
  if(x>='a'&&x<='z'||x>='A'&&x<='Z')
  {
   letter[i]=x;
   i++;
  }
 }while(x!='\n');
 j=1;
 for(x='a';x<='z';x++)
 {
  for(i=1;i<=strlen(letter);i++)
   if(x==letter[i]) y++;
  digit[j]=y;
  j++;
 }
 for(i=1;i<=strlen(letter);i++)
 {
  j=i;
  if(digit[j]>max)
  {
   max=digit[j];
   x=letter[i];
  }
 }
 printf("%c %d",x,max);
 return 0;
}
  
