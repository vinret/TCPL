#include <stdio.h>
#include <string.h>
int main(){
 char x[100],y[100];
 int p,n,len;
 scanf("%s%d%d%s",x,&p,&n,y);
 len=strlen(y);
 for (int i=0;i!=n;++i)
     x[p+i-1]=y[len-n+i];
 printf("%s\n",x);
 return 0;
}
