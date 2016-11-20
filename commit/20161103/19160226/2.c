#include<stdio.h>
int main()
{
    int n;
    long long A[10], B[10], C[10];
    int s = 1;
    scanf("%d", &n);
    while(s<=n) 
    {
        scanf("%lld%lld%lld", &A[s], &B[s], &C[s]);
	s++;
    }

    for(s=1;s<=n;s++)
    {
	if (A[s] + B[s]>C[s])
	printf("Case #%d: ture\n", s);
	else
	printf("Case #%d: false\n", s);
    }
    return 0;
}
