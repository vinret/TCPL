#include <stdio.h>
int main()
{
	int N,n=0,x,y;
	int line,i;
        char c;

	scanf("%d %c",&N,&c);
        do
	{
		n++;
		x=N-(2*n*n-1);
		y=N-(2*(n+1)*(n+1)-1);
	}while((x<0)||(y>=0));                 //确定了半行数n
       
	if(n==1) printf("*\n"); else
	

    {	line=n;

	do
	{
		for(i=n-line;i>0;i--)
			printf(" ");
		for(i=2*line-1;i>0;i--)
			printf("%c",c);
		printf("\n");
		line--;
	}while(line>=1);                       //打印沙漏上半部分
        
        line=2;
	
	do
	{
		 for(i=n-line;i>0;i--)
			 printf(" ");
		 for(i=2*line-1;i>0;i--)
			 printf("%c",c);
		 printf("\n");
		 line++;
	}while(line<=n);                       //打印沙漏下半部分
     }
	
	printf("%d\n",N-(2*n*n-1));
	return 0;
}

	
		
