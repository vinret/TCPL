#include<stdio.h>
#include<string.h>
int main(){
char s[1000];
int i;
gets(s);
for (i=1;i<=strlen(s);++i)
    putchar(s[strlen(s)-i]);
printf("\n");
return 0;
}
