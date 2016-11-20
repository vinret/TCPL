#include<stdio.h>
void print_hex(int a);

int main()
{
	int a;
	scanf("%d",&a);
	print_hex(a);
	printf("\n");
	return 0;
}

void print_hex(int a)
{
	char n[100000];
	int temp;
	int i;
	for(i=0;a!=0;i++)
	{
		temp=a%16;
		a=a/16;
		switch(temp)
		{
			case 1:n[i]='1';break;

			case 2:n[i]='2';break;
			case 3:n[i]='3';break;
                        case 4:n[i]='4';break;
			case 5:n[i]='5';break;
			case 6:n[i]='6';break;
                        case 7:n[i]='7';break;
			case 8:n[i]='8';break;
			case 9:n[i]='9';break;
                        case 10:n[i]='A';break;
			case 11:n[i]='B';break;
			case 12:n[i]='C';break;
			case 13:n[i]='D';break;
			case 14:n[i]='E';break;
			case 15:n[i]='F';break;
		}
	}
	for(i=i-1;i>=0;i--)
		printf("%c",n[i]);
}
