#include<stdio.h>
#include<math.h>
int TYHS(int m)
{
	int flag=1;
    int i,temp;
	for(i=2;i<m;i++)
	{
		temp=m%i;
		if(temp==0)
		{
			flag=0;
			break;
		}
    }
	return flag;
}
int main()
{
	int a=0,b=0,c,m,e;
	scanf("%d %d",&a,&b);
    c=2;
	e=0;
	if(a<=c && c<=b)
	{
		printf("2");
		e++;
	}
	m=3;
	while(c<b)
	{
		if(TYHS(m))
		{
			c++;
			if(a<=c && c<=b)
			{
				if(e && (e)%10==0)
					printf("\n%d",m);
				else if(e)
					printf(" %d",m);
				else 
					printf("%d",m);
					e++;
			}
		}
		m+=2;;
	}
	printf("\n");
	return 0;
}
