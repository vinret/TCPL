
#include "stdio.h"
#define N 13
int main(void) 
{
	int i, j, a[N + 1] = { 0 };
		printf("Yang-Hui triangle 13 layer:\n");
			for (*(a + 1) = i = 1; i <= N; i++) 
				{
						printf("%*c", 1 + ((N - i) << 1), ' ');
								for (j = i; j >= 1; j--)
											printf("%4d", *(a + j) += *(a + j - 1));
													printf("\n");
														}
														return 0;
														}
