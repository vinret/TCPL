#include<stdio.h>
int main()
{
char a,b,c;
scanf("%c%c%c",&a,&b,&c);
if(c=='0')
  if(b=='0')
    printf("%c\n",a);
  else
    printf("%c%c\n",b,a);
else
  printf("%c%c%c\n",c,b,a);
return 0;
}

