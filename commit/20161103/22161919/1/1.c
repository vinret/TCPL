#include<stdio.h>
#include<string.h>
int main()
{
    char c[101];
    int count=0,a[101],i;

    scanf("%s",c);
    for(i=0;i<strlen(c);++i)
        count+=((int)c[i]-48);

    i=0;
    while(count)
    {
          a[++i]=count%10;
          count/=10;
    }

    for(;i>=1;--i)
    {
        switch(a[i])
        {
               case 1:printf("yi");break;
               case 2:printf("er");break;
               case 3:printf("san");break;
               case 4:printf("si");break;
               case 5:printf("wu");break;
               case 6:printf("liu");break;
               case 7:printf("qi");break;
               case 8:printf("ba");break;
               case 9:printf("jiu");break;
               default:printf("ling");
         }
         if(i>1) printf(" ");
         else    printf("\n");
     }
     
     return 0;
}
          
