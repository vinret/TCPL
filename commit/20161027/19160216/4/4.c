#include<stdio.h>
int main()
{int x,n,i,k,j,c;
 char b;
printf("please input number x:\n" )  ;
printf("plerse input character b:\n") ;
scanf("%d %c",&x,&b);
for(n=1;;n++)
{if(2*n*n>x+1)break;
 
}
n=n-1;
for(i=n;i>=2;i--)
 {for(j=0;j<=n-i;j++)
  printf(" ");
  for(k=1;k<=2*i-1;k++)
    printf("%c",b);
    printf("\n");
}


 for(i=1;i<=n;i++)
{for(j=0;j<=n-i;j++)
  printf(" ");
  for(k=1;k<=2*i-1;k++)
   printf("%c",b);
    printf("\n");
}
c=x-2*n*n+1;
printf("%d\n",c);
return 0;
}
         
