#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str){
        int i,step,count=0,len;
        len=strlen(str);
        for(i=0;i<(len/2);i++){
                if(str[i]!=str[len-i-1])
                        break;
                else
                        count++;
        }
        if(count==(len/2))
                return 0;
        else
                return -1;
}
int main()
{
        char str[10000];
        scanf("%s",str);
        printf("%d\n",is_str_pal(str));
return 0;
}
