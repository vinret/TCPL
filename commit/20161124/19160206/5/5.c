#include<stdio.h>
#include<math.h>
int is_pow2(int n)
{
 if (log2(n)==(int)log2(n)) 
return(0);
 else 
return(-1);
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",is_pow2(n));
return 0;
}

