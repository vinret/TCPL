#include<stdio.h>
int main()
{
    int T,i,j;
    int a[10],b[10],c[10];
    scanf("%10d",&T);
    for(i=1;i<T;i++)
    {
       scanf("%11d %11d %11d\n",&a[i],&b[i],&c[i]);
    }
    for(j=1;j<=T;j++)
    {
       if((a[j]+b[j])>c[j])
         printf("case #%d:true",j);
       else
         printf("case #%d:false",j);
       printf("\n");
     }
     return 0;
}
