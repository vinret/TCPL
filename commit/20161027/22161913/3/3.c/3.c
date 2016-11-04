#include<stdio.h>
int main()
{
    int i,n=0;
    printf("请输入i(i<1000): ");
    scanf("%d",&i);
    while(i!=1)
    {
        if(i%2==0) {
        i=i/2;
        n++;
        }else{
        i=(3*i+1)/2;
        n++;
        }
    }
    printf("%d\n",n);
    return 0;
}
 

   

