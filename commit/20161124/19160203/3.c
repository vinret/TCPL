#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str){
int l=strlen(str);
int i;
for (i=0;i<=l/2;++i)
    if (str[i]!=str[l-i-1]) 
    return -1;
return 0;
}
int main(){
char s[100];
gets(s);
printf("%d\n",is_str_pal(s));
return 0;
}
