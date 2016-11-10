#include<stdio.h>
#include<string.h>
int main()
{
		char str[100000];
		fgets(str,100000,stdin);
		int i,sum,count0,count1;
		for(i=0;i<strlen(str);i++){
				if(str[i]>='A'&&str[i]<='Z'){
						sum=(int)str[i]-64+sum;
				}else if(str[i]>='a'&&str[i]<='z'){
						sum=(int)str[i]-96+sum;
				}
		}
		count0=count1=0;
		do{

				i=sum%2;
				sum/=2;
				if(i==0)
						count0++;
				else
						count1++;
		}while(sum>0);
		printf("%d %d\n",count0,count1);
		return 0;
}
