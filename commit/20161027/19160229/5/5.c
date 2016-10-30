#include<stdio.h>
int main()
{
		int A,DA,B,DB;
		int i,j,a,b;
		i=0;j=0;
		scanf("%d %d %d %d",&A,&DA,&B,&DB);
		
		do{
				a=A%10;
				if(a==DA){
						i=i*10+a;
				}
				A=A/10;
		}while(A>=10);

		do{
				b=B%10;
				if(b==DB){
						j=j*10+b;
				}
				B=B/10;
		}while(B>=10);

		printf("%d\n",i+j);
		return 0;
}
