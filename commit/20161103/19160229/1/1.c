#include<stdio.h>
#include<string.h>
int main()
{
		int i,len,num,sum=0;
		char str[100];
		//gets(str);
		scanf("%s",str);
		len=strlen(str);//输入数据得到数据的长度来控制循环的进行

		for(i=0;i<len;i++){
				num=(int)str[i];
				sum=sum+num-48;
				//把字符型的数字强制转换成整型，转换对应的为字符型数字的ASCII码要减48
		}

		int t=sum,a=1,j;
		//找到总和的位数，从第一个开始分离
		while(t>9){
				t/=10;
				a=a*10;
		}
		do{
				j=sum/a;
				sum%=a;
				a/=10;
				switch(j){
						case 0:printf("ling");break;
						case 1:printf("yi");break;
						case 2:printf("er");break;
						case 3:printf("san");break;
						case 4:printf("si");break;
						case 5:printf("wu");break;
						case 6:printf("liu");break;
						case 7:printf("qi");break;
						case 8:printf("ba");break;
						default:printf("jiu");
				}
				if(a>0)
						printf(" ");
		}while(a>0);
		printf("\n");
		return 0;
}
