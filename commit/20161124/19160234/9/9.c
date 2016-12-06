#include<stdio.h>
int main()
{
    int n,a,bigger,smaller,num[4],i,j;
    scanf("%d",&n);
    if(n%1111==0)
        printf("%d -%d = 0\n",n,n);
    else
	{
        while(n!=6174)
		{
            for(i=0;i<4;i++)
			{
                num[i]=n%10;
                    n/=10;
            }
            for(j=0;j<3;j++)
			{
                for(i=0;i<3-j;i++)
				{
                    if(num[i]>num[i+1])
					{
                        a=num[i+1];
                        num[i+1]=num[i];
                        num[i]=a;
                    }
                }
            }
            bigger=num[3]*1000+num[2]*100+num[1]*10+num[0]*1;
            smaller=num[0]*1000+num[1]*100+num[2]*10+num[3]*1;
            n=bigger-smaller;
            printf("%04d - %04d = %04d\n",bigger,smaller,n);
        }
		
    }
    return 0;
}
