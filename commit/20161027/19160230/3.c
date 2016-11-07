#include<stdio.h>
int main()
{
	int a,s;
	s=0;
	printf("请输入a(a<1000):\n");
	scanf("%d",&a);
	while(a>1)
	{
		if(a%2==0){
			a=a/2;
			s++;
		}else{
			a=(3*a+1)/2;
			s++;
		}
	}	
	printf("%d.\n",s);
	return 0;
}

