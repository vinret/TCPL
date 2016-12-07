#include <stdio.h>
int main()
{
Hanio(4,'A','B','C','D');
return 0;
}
void Move(char source,char target)
{
printf("%c->%c\n",source,target);
}
void Hanio(int n,char source,char help,char target)
{
if(1==n) Move(source,target);
else
{
 Hanio(n-1,source,target,help);
 Move(source,target);
 Hanio(n-1,help,source,target);
}
}

