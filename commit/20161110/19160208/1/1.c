#include<stdio.h>
int main()
{
    int a[10][10];
    int x,y;
    for(x=0;x<10;x++)
    {
        a[x][0]=1;
        a[x][x]=1;
    }
    for(x=2;x<10;x++)
    for(y=1;y<x;y++)
        a[x][y]=a[x-1][y-1]+a[x-1][y];
    for(x=0;x<10;x++)
    {
        for(y=0;y<=x;y++)
        printf("%d  ",a[x][y]);
        printf("\n");
    }
    return 0;
}
