#include<stdio.h>
void Move(char source,char target){
   printf("%c->%c\n",source,target);
}
void Hanio(int n,char source,char help,char target){
    if(n==1)Move(source,target);
    else{
      Hanio(n-1,source,target,help);
      Move(source,target);
      Hanio(n-1,help,source,target);
}
}
int main()
{
   Hanio(3,'A','B','C');
   return 0;
}

