#include<stdio.h>
int main()
{
    int A,B,C;
	int D,a=0,b=0;
	scanf("%d %d %d",&A,&B,&D);

	C=A+B;

	while(C>=D){
		a=a*10+C%D;
		C=C/D;
	}
    a=a*10+C;


    while(a>0){
        b=b*10+a%10;
		a=a/10;
	}
	printf("%d\n",b);

		return 0;
}
