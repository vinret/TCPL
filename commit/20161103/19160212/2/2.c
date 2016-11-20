#include<stdio.h>
int main(){
long long a,b,c;
int lines;
scanf("%d",&lines);
int i;
int flag=1;
for(i=0;i<lines;i++)
{
long long result=a+b;
scanf("%lld %lld %lld",&a,&b,&c);
if(result>c)flag=1;
else flag=0;
printf("Case #%d: %s\n",i+1,flag==1?"flase":"ture");
}
return 0;
}
