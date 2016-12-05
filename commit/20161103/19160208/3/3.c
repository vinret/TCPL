#include<stdio.h>
int main()
{
    int a,b,c,d,e,i=0,m[100];
    scanf("%d %d %d",&a,&b,&d);
    c=a+b;
    while(c!=0)
    {
       m[i]=c%d;
       c=c/d;
       i++;
    }
    i-=1; 
    for(a=i;a>=0;a--)
       printf("%d",m[a]);
    printf("\n");
    return 0;
}
     
