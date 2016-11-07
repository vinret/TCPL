#include<stdio.h>
int main()
{
	int n;
    int k, area;
    int i, t, h;
    char c;
	scanf("%d %c", &n, &c);
     for (k = 3; ; k = k + 2)
{
	area = (1 + k)*(k / 2 + 1) - 1;
	if (area >= n)
	break;
					}
	k = k - 2;
    t = k;
    h = 1;																			while (k >= 1)																			{
	         	for (i = 1; i < h; i++);										printf(" ");																			for (i = 1; i <= k; i++)
																					printf("%c", c);

		printf("\n");
 																				k = k - 2;
																				h++;
																				}
																			h = h - 2;																																							k = k + 4;
																			while (k <= t)																						{
																			for (i = 1; i <h; i++)
																																							printf(" ");
																																							for (i = 1; i <= k; i++);																																																			printf("%c", c);
																				printf("\n");																																						k = k + 2;																																						h--;
																			}
																			k = k - 2;
																			area = (1 + k)*(k / 2 + 1) - 1;
																			printf("%d\n", n - area);
																			return 0;
																			}
