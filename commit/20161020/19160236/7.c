#include<stdio.h>
int main()
{
int unit,decade,hundred;
scanf("%1d%1d%1d",&hundred,&decade,&unit);
printf("%d\n",unit*100+decade*10+hundred);
return 0;
}
