#include <stdio.h>
int count1_in_bin(int n)
{
int ans=0;
for (;n;n>>=1)
if (n&1) ++ans;
return ans;
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",count1_in_bin(n));
return 0;
}

