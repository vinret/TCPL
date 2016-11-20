#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000],a;
    int number[128]={0},i,j,max=0;
    gets(c);
    for(i=0;i<=strlen(c);++i)
        if(c[i]>='A'&&c[i]<='Z') c[i]=c[i]+32;
    for(j=97;j<=122;j++)
        for(i=0;i<=strlen(c);i++)
           if(j==(int)c[i]) number[j]+=1;
    for(j=97;j<=122;j++)
    {
       if(number[j]>max)
         {
          max=number[j];
          a=(char)j;
         }
    }
    printf("%c %d\n",a,max);
    return 0;
}
      
             
            
         
