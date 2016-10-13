#include <stdio.h>
#include <string.h>
int main(){
 char x[100];
 int p,n;
 scanf("%s%d%d",x,&p,&n);
 for (int i=p-1;i!=p+n-1;++i){
     switch (x[i]){
            case '0':x[i]='1';break;
            case '1':x[i]='0';break;
     }
 }
 printf("%s",x);
 return 0;
}
