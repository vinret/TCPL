#include <stdio.h>
char *Hex = "0123456789ABCDEF"; void PrintHex(int a)
{
	if (!a)return;
		PrintHex(a / 16);
			printf("%c", Hex[a % 16]);
			}void main()
			{
				int a;
					scanf("%d", &a);
						PrintHex(a);
						}
