#include<stdio.h>
int main()
{
    char a; 
    int N;
    int m,k,j,i; 
    scanf("%d %c",&N,&a); 
    for(i=0;(i*i*2-1)<=N;++i) 
     {
     }   
      --i;
   
    for(j=i;j>=1;--j) 
    { 
       for(m=i;m-j>0;--m) 
      { 
          printf(" "); 
      } 
      for(k=j*2-1;k>=1;--k) 
      { 
        printf("%c",a); 
      } 
      printf("\n"); 
   }  
   int u,v; 
   for(u=i,v=2;u>1;--u,++v) 
   {  
   for(m=u-2;m>0;--m) 
   { 
     printf(" "); 
   } 
   if(v<=i) 
   { 
     for(k=1;k<=(2*v-1);++k) 
     { 
     printf("%c",a); 
     } 
   } 
   printf("\n"); 
   } 
   int y=((N+1)-2*i*i); 
   printf("%d\n",y);  
   return 0;
}
 






