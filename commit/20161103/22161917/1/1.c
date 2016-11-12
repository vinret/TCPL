#include<stdio.h>
#include<string.h>
int main()
{
    int  a[4],i,j,k;
    int  sum=0;
    char c[101];
    gets(c);
    for(k=0;k<strlen(c);k++)
        sum=sum+((int)c[k]-48);
    if(sum==0) printf("ling\n");
    for(j=0;sum!=0;j++)
    {
        a[j]=sum%10;
        sum/=10;
    }
    for(;j>0;j--)
    {
        switch(a[j-1])
        {
        case 0:printf("ling");break;
        case 1:printf("yi");  break;
        case 2:printf("two"); break;
        case 3:printf("san"); break;
        case 4:printf("si");  break;
        case 5:printf("wu");  break;
        case 6:printf("liu"); break;
        case 7:printf("qi");  break;
        case 8:printf("ba");  break;
        default:printf("jiu"); 
        }
        if(j>1) printf(" ");
        else  printf("\n");
    }

    return 0;
}

