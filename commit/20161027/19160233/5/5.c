#include<stdio.h>  
#include<string.h>

int main()  
{  
	char a[11]={'\0'},b[11]={'\0'};  
    	int A,B;  
    	char c;  
    	int n1=0,n2=0,i;  
    	long num1=0,num2=0;  
    	scanf("%s",a);  
	scanf("%d",&A);  
    	scanf("%s",b);  
    	scanf("%d",&B);  
    	n1=strlen(a);  
    	n2=strlen(b);     
    	for(i=0;i<n1;i++)  
        	if(a[i]-48==A)  
            		num1=num1*10+A;   
    	for(i=0;i<n2;i++)  
		if(b[i]-48==B)  
			num2=num2*10+B;  
	printf("%ld\n",num1+num2);  
	return 0;  
}
