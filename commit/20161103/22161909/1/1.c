#include <stdio.h>
#include <string.h>
int main()
{
	int sum=0,j,z[10],k;
	char c[100];
	scanf("%s",c);
	
	for(k=0;k<strlen(c);k++)
		sum=sum+((int)c[k])-48;
       
	if(sum==0) printf("ling\n");
	else
	{

	  for(j=0;sum!=0;j++)
	  {
		z[j]=sum%10;
		sum=sum/10;
	  }  
     
	  for(j--;j>=0;j--)
	  {
		switch(z[j])
		{
			case 0 :printf("ling ");break;
			case 1 :printf("yi ");break;
			case 2 :printf("er ");break;
			case 3 :printf("san ");break;
			case 4 :printf("si ");break;
			case 5 :printf("wu ");break;
			case 6 :printf("liu ");break;
			case 7 :printf("qi ");break;
			case 8 :printf("ba ");break;
			case 9 :printf("jiu ");break;
		}
	  }  
	
	  printf("\b\n");
	}
	return 0;
}
	


