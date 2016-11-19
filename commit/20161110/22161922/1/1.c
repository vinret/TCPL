#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int y[n+1][n+1], i, j;
   y[0][0] = 1;
   y[1][0] = y[1][1] = 1;
   for (i = 2; i <= n; i ++)
   {
           y[i][0] = y[i][i] = 1;
           for (j = 1; j < i; j ++)
                   y[i][j] = y[i-1][j] + y[i-1][j-1];
   }

for (i = 0; i <= n; i ++)
   {
           for (j = 0; j < (n - i)*2; j ++)
                   printf(" ");

for (j = 0; j <= i; j ++)
                   printf("%4d", y[i][j]);
           printf("\n");
   }
}


