#include<stdio.h>
#include<math.h>
int main()
{
    char c;
    int  N,i,j,k,sum_1,sum_2;
    int  n=1;
    scanf("%d %c",&N,&c);
    for(i=3,sum_1=1;N>2*sum_1+1;i+=2)
       { sum_1+=i;
        sum_2=sum_1-i;}
        i=i-2;
    while(i!=1){
        while(n<=i){
	   printf("%c",c);n++;
           }
           n=1;
           printf("\n");i-=2;
           printf(" ");
        }
    for(i=1;i<=sqrt(sum_2)+1;i++)
    {
        for(j=1;j<=sqrt(sum_2)-1;j++)
	    printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("%c",c);
        printf("\n");
    }
    printf("%d\n",N-2*sum_1+1);
    return 0;
}
         
              
       
