#include<stdio.h>
int main()
{
    char c,s[81];
    int i=0;
    c=getchar();
    while(c!='\n'){
       s[i]=c;
       c=getchar();
    i++;
}
    s[i]='\0';
    for(;i>=0;i--){
    if(s[i]==32){
    char *ch=&s[i+1];
     printf("%s ",ch);
    s[i]='\0';
}
}
    printf("%s\n",s);
    return 0;
}
