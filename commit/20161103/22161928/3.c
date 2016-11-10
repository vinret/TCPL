#include<stdio.h>
int main()
{
    int A,B,D,n;
    printf("%d %d %d",A,B,D);
    D==2||8||10;
    scanf("%d %d %d\n",&A,&B,&D);
    n=A+B;
    if(D==10) printf("%d\n",n);
    if(D==8) printf("%o\n",n);
    else 
       {    
         int n,i,k,a[10],m;
         scanf("%d",&n);
         for(i=0;n>=1;i++)
         {
           a[i]=n%2;
           n=n/2;
         }
         m=i;
         for(k=0;k<=m;k++)
         printf("%d\n",a[k]);
       }
    return 0;
}
