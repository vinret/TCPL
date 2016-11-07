#include<stdio.h>
int main()
{
    int n;
    int p,z;
    int i,j,k;
    char c;
    scanf("%d %c",&n,&c);
   
    for(p=3; ;p=p+2)
    {
       z=(1+p)*(p+1)/2-1;
       if(z>n)
       break;
    }
  
    p=p-2;
    k=1;
    j=p;

    for(p; p>=1;)
    {
       for(i=1;i<=k;i++)
       printf(" ");
       for(i=1;i<=p;i++)
       printf("%c",c);
       printf("\n");
       p=p-2;
       k++;
    }
  
    p=p+4;
    k=k-2;
   
    for(p; p<=j;)
    {
       for(i=1;i<=k;i++)
       printf(" ");
       for(i=1;i<=p;i++)
       printf("%c",c);
       printf("\n");
       p=p+2;
       k--;
    }

    p=p-2;
    z=(1+p)*(p+1)/2-1;
    printf("%d\n",n-z);
   
    return 0;
}

