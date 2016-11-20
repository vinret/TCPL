#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int i,j;
    j=(int)sqrt(n);
    for(i=2;i<=j;i++)
    if(n%i==0)
       break;
    if (i<=j)
       return-1;
    else
       return 0;
}

int main()
{
    int n,i,count=0;
    for (n=2;count<1000;n++)
    {
        i=is_prime(n);
        if(i==0)
        {
        count++;
	if(count>=100)
	printf("%d\t",n);
	}
    }
	printf("\n");
        return 0;
}
