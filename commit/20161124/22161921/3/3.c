#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str);
int main()
{
    char str[200];
    printf("请输入字符串:\n");
    scanf("%s",(char*)&str);
    printf("%d\n",is_str_pal(str));
    return 0;
}
int is_str_pal(const char* str)
{
    int i,n=0,j;
    j=strlen(str);
    for(i=0;i<(j/2);i++)
    {
	if(str[i]!=str[j-i-1])
	break;
        else 
       n++;
     }
    if(n==(j/2))
     return 0;
    else
    return -1;
}

   
    
