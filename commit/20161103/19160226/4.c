#include <stdio.h>
int main()
{
    char str[1000]={0};
    int num[30]={0};
    gets(str); 
    int i;
    int k=0;
    for (i=0;str[i]!='\0';i++)
    {
	if (str[i]>='A'&&str[i]<='Z')
	{
	str[i]=str[i]+32; 
	k = (int)str[i]-97;
	num[k]++;
	}

	else if (str[i]>='a'&&str[i]<='z')
	{
	k = (int)str[i]-97;
	num[k]++;
	}
     }

     int max=0,s=0;
     for(i=0;i<30;i++)
     {
     if (num[i]>max)
	{
	max=num[i];
	s=i;
	}
     }
     
     printf("%c %d\n",'a'+s,max);
     return 0;
}
