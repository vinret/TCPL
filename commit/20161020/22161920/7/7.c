#include <stdio.h>
int main()
{
int input,left,middle,right,output;
 scanf("%d",&input);
right=input%10;
left=input/100;
middle=input%100/10;
output=100*right+10*middle+left;
printf("%d\n",output);
return 0;
}

