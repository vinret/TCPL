#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,sum;
    int m,n;
    char c;

    sum=0;
    while((c=getchar())!='\n')
    {
        if(c>'a'&&c<='z')
        sum+=c-'a'+1;
       
        else if(c>='A'&&c<='Z')
        sum+=c-'A'+1;
    }
    m=0;
    n=0;
    while(sum>0)
    {
        if(sum%2==0)
         n++;
        else
         m++;
    
        sum=sum/2;
    }
  
    printf("%d,%d\n",m,n);
    return 0;
}
