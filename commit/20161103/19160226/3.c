#include<stdio.h>
int main()
{
    int a,b,c,s,k;
    int i=0;
    char d[100];
    
    scanf("%d%d%d", &a, &b, &c);
    s=a+b;
   
    if(!s)
    {
        printf("0");
    }

    while (s)
    {
	d[i++] = s%c+'0' ;
	s = s/ c;
    }
    
    for (k = i - 1; k >= 0; k--)
    {
	printf("%c", d[k]);
    }

    printf("\n");	
    return 0;
}
