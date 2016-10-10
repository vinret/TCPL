#include<stdio.h>
#include<string.h>
int main(){
 char x[100];
 int n;
 scanf("%s%d",x,&n);
 int len=strlen(x);
 for (int i=n;i!=0;--i)
     printf("%c",x[len-i]);
 for (int i=0;i!=len-n;++i)
     printf("%c",x[i]);
 printf("\n");
 return 0;
}
