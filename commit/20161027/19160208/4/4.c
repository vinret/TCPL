#include<stdio.h>
int main()
{
    int a,b=1,c,i,j,n=-1;
    char x;
   
    printf("请输入不大于1000的一个正整数和一个符号，中间以空格隔开\n");
    scanf("%d %c",&a,&x);
    
    if (a<8)
    printf("%c\n%d\n",x,a-1);
 
    else
    {
         c=a;
         a=a-1;
        
         while (a>=2*b+4)
         {  
               b=b+2;
               a=a-b*2;
         }  
    
         for (i=b;i>=1;i=i-2)
         {
               n++;
               for (j=1;j<=n;j++) printf(" ");
               for (j=1;j<=i;j++)printf("%c",x);
               printf("\n");
         }  

         for (i=3;i<=b;i=i+2)
         {  
               n--;
               for (j=1;j<=n;j++) printf(" ");
               for (j=1;j<=i;j++)printf("%c",x);
               printf("\n");
         }   
         printf("%d\n",a);
     }
     return 0;
}

