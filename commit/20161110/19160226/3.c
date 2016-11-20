#include<stdio.h>
void print_hex(int a);

void print_hex(int a)
{
     int k,i=0;
     char d[100];
     while(a<=9||a>=16)
     {  
     d[i++]=a%16+'0';
     a/=16;
     if(a==0)
     break;
     }
     for(k=i-1;k>=0;k--)
     printf("%c",d[k]);
     
     if(a>=10&&a<=15)
     {
     a=a+55;
     printf("%c",a);
     }
     
}

int main()
{
    int a;
    scanf("%d",&a);
    print_hex(a);
    printf("\n");
    return 0;
}
