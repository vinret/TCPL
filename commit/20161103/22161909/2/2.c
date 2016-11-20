#include <stdio.h>
int main()
{
	int n,i,z[n],j;
	signed long int A,B,C;
        scanf("%d",&n);

        for(i=0;i<=(n-1);i++)
	{
		scanf("%ld %ld %ld",&A,&B,&C);
		z[i]=(A+B>C);
	}
	
	for(j=0;j<=(n-1);j++)
	{
		switch(z[j])
		{
			case 1 :printf("Case #%d: true\n",j+1);break;
			default:printf("Case #%d: false\n",j+1);break;
		}
	}
	return 0;
}
                
