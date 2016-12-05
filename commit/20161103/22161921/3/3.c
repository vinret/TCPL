#include<stdio.h> 
 int main() 
 { 
    int a,b,d,c[30],e,i=0; 
    scanf("%d%d%d",&a,&b,&d); 
    e=a+b; 
    if (d<=10&&d>1) 
    { 
      while(e!=0) 
       { 
          c[i]=e%d; 
          e=e/d; 
          i++; 
       } 
       for (i--;i>=0;i--) 
          printf("%d",c[i]); 
    } 
    printf("\n");
      return 0; 
 } 
       
 
