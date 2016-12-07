#include<stdio.h>
#include<math.h>
int main()
{
     int M,N;
     scanf("%d %d",&M,&N);
     int a,b=0,c[10000],i,j;
     for(a=2; ;a++)
     {
       j=sqrt(a);
       for(i=2;i<=j;i++)
       {   if(a%i==0)
            break;
       }
       if(i>j)
       {
          c[b]=a;
          b++;
          if(b>=10000)  break;
       }
     }
     int d=0;
     for(i=M;i<=N;i++)
     {
       d++;
       printf("%d",c[i-1]);
       if(d%10!=0&&i!=0) printf(" ");
       else if(d%10==0)  printf("\n");
     }
     printf("\n");
     return 0;
} 
