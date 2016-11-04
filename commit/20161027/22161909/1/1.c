#include <stdio.h>
#include <math.h>
int main()
{
	int a=0,z=1,i;
	
	do
	{
		do
               {
	             a++;
		     i=a*z;
		     printf("%2d*%2d=%2d ",a,z,i);
	        }while(a!=z);
	
	       
		printf("\n");
		z++;
		a=0;
	       
	
	}while(z!=10);

	return 0;

}



