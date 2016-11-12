#include<stdio.h>
int main()
{
    int x,n=0;
    scanf("%d",&x);
    while(x!=1)
    {
	if(x%2==0)  x=x/2,
          n++;
        else  x=(3*x+1)/2,
          n++; 
    }
    printf("%d\n",n);
    return 0;
}	
