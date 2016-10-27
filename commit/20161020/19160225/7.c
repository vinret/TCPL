#include <stdio.h>
int main(){
    char s[4];
	scanf("%s",s);
	int i=2;
	while (s[i]=='0')
	     i--;
	for (;i>=0;--i)
	    printf("%c",s[i]);
	printf("\n");
	return 0;
}


