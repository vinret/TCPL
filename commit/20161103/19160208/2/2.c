#include<stdio.h>
#include<math.h>
int main()
{
    int a[32],b[32],c[32],i,T;
    scanf("%d",&T);
        for(i=0;i<T;i++)
        {
            scanf("%d %d %d",&a[i],&b[i],&c[i]);   
        }
        for(i=0;i<T;i++)
        {
            if(a[i]+b[i]>c[i])
                 printf("case #%d: true\n",i+1);
            else
                 printf("case #%d: false\n",i+1);
        }
    return 0;
}
     
