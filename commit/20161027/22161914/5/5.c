#include<stdio.h>
#include<math.h>
int main()
{
    int a,da,b,db;
    int na=0,nb=0;
    int counta=0,countb=0,i;
    scanf("%d %d %d %d ",&a,&da,&b,&db);
    while(a)
{
;    if(a%10==da)counta++;
    a/=10;
}
    while(b)
{
    if(b%10==db)countb++;
    b/=10;
}
    for(i=10;i<counta;i++)na=na*10+da;
    for(i=0;i<countb;i++)nb=nb*10+db;
    printf("%d",na+nb);
    return 0;
}


