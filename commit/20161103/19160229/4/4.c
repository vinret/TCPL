#include<stdio.h>
#include<string.h>
int main()
{
		char str[1000],c;
		int a[30],len,i,j=0;
		fgets(str,1000,stdin);
		len=strlen(str);
		for(c='a';c<='z';c++){	//主循环用a～z控制，内循环把字符串里每一个字符和主循环字母比较
				a[j]=0;									
				for(i=0;i<len;i++){
						if(str[i]==c||str[i]==c-32){
								a[j]++;//若有与主循环字母相同的字符计数存入新数组之中
						}
				}
				j++;
		}
		int n,max,k;
		max=a[0];
		k=0;
		for(n=0;n<j;n++){ //得到1个计数数组每个元素大小进行比较，最大的对应字母就是出现最多的字母
				if(a[n]>max){
						max=a[n];
						k=n;//k用来存最多字母的序号
				}
		}
		char word[25];//Word数组用来生成有序的26个字母，方便对应序号k输出
		c='a';
		for(i=0;i<26;i++){
				word[i]=c;
				c++;
		}
		printf("%c %d\n",word[k],max);
		return 0;
}
