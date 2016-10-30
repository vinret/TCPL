#include<stdio.h>
int main()
{
     int s,h,l,half;
     int n,j,a;
     s=0;
     a=1;
     char c;
     scanf("%d %c",&n,&c);
     half=(n-1)/2;
     while(s<=half)
     {
        a=a+2;
        s=s+a;
     }
       s=s-a;
       a=a-2;
       h=1;
       l=n-2*s-1;
     while(a>0)
     {
       for(j=1;j<h;j+=1)
       printf(" ");
       for(j=1;j<=a;j++)
       printf("%c",c);
       printf("\n");
       a-=2;
       h++;
     }
       a+=4;
       h-=2;
     while(h>0)
    {
       for(j=1;j<h;j+=1)
       printf(" ");
       for(j=1;j<=a;j++)
       printf("%c",c);
       printf("\n");
       a+=2;
       h--;
     }
       while(l!=0)
     {
       printf("%d\n",l);
     }
       return 0;
}
     
    
    

