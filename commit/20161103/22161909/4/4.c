#include <stdio.h>
#include <string.h>
int max(int);
int main()
{
	int max;
	int alphabet[26],j=0;
	int length,i,jishu=0,duibi;
	char string[1001];
	gets(string);
        length=strlen(string);
       
	for(i=0;i<length;i++)
	{
		if((string[i]>=65)&&(string[i]<=90)) string[i]=string[i]+32;
	}
        
	for(duibi=97;duibi<=122;duibi++)
	{
		for(i=0;i<length;i++)
		{
			if(duibi==string[i]) jishu++;
		}
		alphabet[j]=jishu;
		jishu=0;
		j++;
	}
        
        max=alphabet[0];
	for(i=0;i<25;i++) max=max>alphabet[i+1]?max:alphabet[i+1];
	
	for(i=0;i<=25;i++) if(max==alphabet[i]) break;

	printf("%c %d\n",i+97,max);
	return 0;
}

