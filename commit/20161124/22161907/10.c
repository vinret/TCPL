#include<stdio.h>
#include<string.h>
void reverse(char* str);

void reverse(char* str)
{
int i,j;
i=strlen(str);
char k;
for (j=0;j<i/2;j++)
{ k=str[j];
  str[j]=str[i-j];
  str[i-j]=str[j];
}  }
 

int main()
{
int j;
char str[20];
scanf("%s", str);
reverse(str);
for (j=0;j<strlen(str);j++)
printf("%c", str[j]);
printf("\n");
return 0;
}

