
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n = 0, count = 0;
	while (1) {
	count = 0;
   scanf("%d", &n);
	while (n != 1) {
    if (n % 2 == 0)
	n /= 2;	
	else																				n = (3 * n + 1) / 2;
																									count++;
																					}
																							printf("%d\n", count);
																							}
																					system("pause");
																						return 0;
																			}

