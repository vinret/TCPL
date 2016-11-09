#include<stdio.h>
int main()
{
        int a,b,i=0,j=0,pa,pb;
        scanf("%d %d %d %d",&a,&pa,&b,&pb);
        while(a!=0)
              {
                if(a%10==pa)
                   i=i*10+pa;
                   a=a/10;
               }
         while(b!=0)
              {
                if(b%10==pb)
                   j=j*10+pb;
                   b=b/10;
               }
    printf("%d\n",i+j);
    return 0;
}
