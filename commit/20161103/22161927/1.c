#include <stdio.h>
#include <string.h>
int main()
{
int j=0,h=0,t=0,i=0;
char n[100],py[4];
scanf("%s",n);
while(j<strlen(n))
{h=h-48+(int)(n[j]);
j++;}
while(h!=0)
{t=t*10+h%10;
h=h/10;
i++;}
while(t!=0)
{switch(t%10)
{
case 9 :printf("jiu");break;
case 8 :printf("ba");break;
case 7 :printf("qi");break;
case 6 :printf("liu");break;
case 5 :printf("wu");break;
case 4 :printf("si");break;
case 3 :printf("san");break;
case 2 :printf("er");break;
case 1 :printf("yi");break;
case 0 :printf("ling");break;}
printf(" ");
t=t/10;
i--;
if(0==i)break;
}
return 0;
}

