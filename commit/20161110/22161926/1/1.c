#include<stdio.h>
void main()
{
     int j;
     int h;
     int  i[10][10];
     for(j=0;j<10;j++)
     {
        for(h=1;h<j;h++)
        {
             i[j][h]=i[j-1][h-1]+i[j-1][h];
        }
     }
     for(h=0;h<10;h++)
     {
     for(j=0;j<10-h;j++)
     printf(" ");
        for(j=0;j<=h;j++)
        {
           printf("%3d",i[h][j]);
        }
        printf("\n");
     }
}
