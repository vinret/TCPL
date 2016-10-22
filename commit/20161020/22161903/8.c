#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i;
    char buffer[33];
    printf("输入十进制数:");
    scanf ("%d",&i);    
    itoa (i,buffer,2);    
    printf ("二进制: %s\n",buffer);   
    itoa (i,buffer,8);   
    printf ("八进制: %s\n",buffer);    
    itoa (i,buffer,16);   
    printf ("十六进制: %s\n",buffer);    
    return 0;
}
