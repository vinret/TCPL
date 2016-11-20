#include<stdio.h>
int main()
{
 printf("1\n");
 int i,j,a=1,b,c,n;
 for (i=1;i<13;i++)
   { a*=i;
     b=1;
     for (j=0;j<=i;j++)
       {if (j!=0) b*=j;
        c=1;n=1;
        while (n<=i-j) 
          {  c*=n;n++;}
       printf("%d ",a/b/c);
       }
     printf("\n");
    }
 printf("...\n");
return 0;
}
