#include<stdio.h>
int main()
{
char a,b,c;
scanf("%c%c%c",&a,&b,&c);
if(c!=48)
printf("%c%c%c\n",c,b,a);

else if((c==48&&b==48))
printf("%c\n",a);
else if((c==48&&b!=48))
printf("%c%c\n",b,a);
return 0;
}
