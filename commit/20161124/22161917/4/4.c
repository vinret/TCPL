#include<stdio.h>
int is_int_pal(int n)
{
    int i,j,str[11];
    for(i=0;n>0;i++){
	str[i]=n%10;
	n/=10;
    }
    for(j=0;j<i/2;j++)
	if(str[j]!=str[i-j-1])  return -1;
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(is_int_pal(n)) 
       printf("This number isn't a plindrome.\n");
    else
       printf("This number is a plindrome.\n");
    return 0;
}
