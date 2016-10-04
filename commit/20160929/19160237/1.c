#include<stdio.h>
int main()
{
	char c;
	int i;
	float x;
	double z;
	long int li;
	signed long int sli;
	unsigned int ui;
	unsigned long int uli;
	short int si;
	signed short int ssi;
	unsigned short int usi;
	
	printf("char size=%d\n",sizeof(c));
	printf("int size=%d\n",sizeof(i));
	printf("float size=%d\n",sizeof(x));
	printf("double size=%d\n",sizeof(z));
	printf("long int size=%d\n",sizeof(li));
	printf("signed long int size=%d\n",sizeof(sli));
	printf("unsigned int size=%d\n",sizeof(ui));
	printf("unsigned long int size=%d\n",sizeof(uli));
	printf("short int size=%d\n",sizeof(si));
	printf("signed short int size=%d\n",sizeof(ssi));
	printf("unsigned short int size=%d\n",sizeof(usi));
        
	return 0;
}
