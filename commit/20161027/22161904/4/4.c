#include<stdio.h>
int main()
{
    int n,a,b,i,j,k,x,y,z;
    char ch;
    scanf("%d %c",&n,&ch);
    for(a=1;n>=2*a*a-1;a++) b=a;
    for(i=b;i>=2;i--)
    {
        for(j=1;j<=b-i;j++)
            printf(" ");    
        for(k=1;k<=2*i-1;k++)
            printf("%c",ch);
        printf("\n");
    }
    for(x=b;x<=2*b-1;x++)
    {
        for(y=1;y<=b-(x-2);y++)
            printf(" ");
        for(z=1;z<=2*(x-2)-1;z++)
            printf("%c",ch);
        printf("\n");
    }
    printf("%d\n",n-(2*b*b-1));
    return 0;
}

    
