#include<stdio.h>

#include<string.h>

int main()

{

char c[101];

int i,sum=0,x[101];

scanf("%s",&c);

for(i=0;i<strlen(c);i++)

sum=sum+((int)c[i]-48);

for(i=0;sum!=0;i++)

{

x[i]=sum%10;

sum=sum/10;

}

for(i=i-1;i>=0;--i)

{

switch(x[i])

{case 0:printf("ling");break;

 case 1:printf("yi");break;

 case 2:printf("er");break;

 case 3:printf("san");break;

 case 4:printf("si");break;

 case 5:printf("wu");break;

 case 6:printf("liu");break;

 case 7:printf("qi");break;

 case 8:printf("ba");break;

 default:printf("jiu");

}

if (i>0) printf(" ");

else printf("\n");

}

return 0;

}
