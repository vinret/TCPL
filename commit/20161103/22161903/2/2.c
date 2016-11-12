#include <stdio.h>
int main()
{
        int n[10][3];
        int i,j,T;
    scanf("%d",&T);

    for(i=0;i<T;i++)
       for(j=0;j<3;j++)
          scanf("%d",&n[i][j]);

           for(i=0;i<T;i++)
           {       j=0;
                   if(n[i][j]+n[i][j+1]>n[i][j+2])
           printf("Case #%d: true\n",i+1);
           else
           printf("Case #%d: false\n",i+1);
           }
return 0;
}
