#include<stdio.h>
#include<math.h>
int main()
{
   int M,N,i,a,b;
   char str[10000];
   scanf("%d%d",&N,&M);
   scanf("%s",str);
   if(i=M;i<=N;i++)
   {
     a=(int)sqrt(i);
     for(b=2;b<=a;b++)
     if(i%b==0)
     break;
     if(b>a)
     printf("%d",i);
   }
    for(int c=0;c<=10;c++)
    printf("%s\n",str[i]);
    return 0;
}
