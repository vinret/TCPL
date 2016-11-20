#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char str[10^5];
	gets(str);
	int N,len,i,m=0,n=0,j,k=0,h=-1,x;
	len=strlen(str);
	for(i=0;i<=len-1;i++)
	{
		if((int)str[i]>='A'&&(int)str[i]<='Z')
		m+=(int)str[i]-'A'+1;
		else if((int)str[i]>='a'&&(int)str[i]<='z')
		n+=(int)str[i]-'a'+1;
	}
	N=m+n;
	while(N/2!=0)
	{
		j=N%2;
		N=N/2;
		h++;
		k+=j*pow(10,h);
	}
	k+=N*pow(10,h+1);
	m=0,n=0;
	while(k/10!=0)
	{
		x=k%10;
		k=k/10;
		if(1==x)
		n++;
		else
		m++;
	}
	printf("%d %d\n",m,n+1);
}

