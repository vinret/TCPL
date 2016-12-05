#include<stdio.h>
int is_pow2(int n)
{
    int t=0;
    while(n>0){
        if(n&1==1) t++;
   	n=n>>1;
	}
    if(t==1) return 0;
    else     return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",is_pow2(n));
    
    return 0;
}

