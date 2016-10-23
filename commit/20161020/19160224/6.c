#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int num;  
	 while(scanf("%d",&num)==1)  
  {          int a,b;  
	a=num/16;
	b=num%16;
	if(a==0)  
 {
	printf("%d\n",b);  
	continue;  
					         }  
	printf("%d%d\n",a,b);  
																		    }  
																			   return 0;  
																			   } 

