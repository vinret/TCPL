#include<stdio.h>
void printf_hex(int a)
{   
    if(a>16)
    printf_hex(a/16);
    if(a%16>9){
	switch(a%16)
	{
	case 10:printf("A");break;
        case 11:printf("B");break;
        case 12:printf("C");break;
        case 13:printf("D");break;
        case 14:printf("E");break;
        default:printf("F");
        }
    }
    else printf("%d",a%16);
}
int main()
{
    int a;
    scanf("%d",&a);
    printf_hex(a);
    printf("\n");
    return 0;
}
	
