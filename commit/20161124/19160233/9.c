#include<stdio.h>
int order(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<3;i++)
		for(j=i+1;j<4;j++)
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	if(n==0)
		return (a[0]*1000+a[1]*100+a[2]*10+a[3]);
	else return (a[3]*1000+a[2]*100+a[1]*10+a[0]);
}
int main()
{
	int a[4],i=0,flag=0;
	char b[5];
	int M,N,result=0;
	while((b[i++]=getchar())!='\n');
	for(i=0;i<4;i++)a[i]=b[i]-'0';
	if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
		printf("N - N = 0000");
	else
		while(result!=6174)
		{
			M=order(a,0);
			N=order(a,1);
			result=M-N;
			printf("%d - %d = %d\n",M,N,result);
			a[0]=result/1000;
			a[1]=result/100-a[0]*10;
			a[2]=result/10-a[0]*100-a[1]*10;
			a[3]=result-a[0]*1000-a[1]*100-a[2]*10;
		}
	return 0;
}
