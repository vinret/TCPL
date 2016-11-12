#include<stdio.h>
int main()
{
		long num[10][3];
		long a,b,c;
		int i,j,n;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			for(j=0;j<3;j++){
				scanf("%ld",&num[i][j]);
			}
		}
		for(i=0;i<n;i++){
				a=num[i][0];
				b=num[i][1];
				c=num[i][2];
				if(a+b>c)
						printf("Case #%d: ture\n",i+1);
				else
						printf("Case #%d: false\n",i+1);
		}
		return 0;
}
