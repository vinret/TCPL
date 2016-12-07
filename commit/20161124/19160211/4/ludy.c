#include <stdio.h>
#define MAX 10
int is_int_pal(int n);
int main()
{ int n,k;
  printf("输入一小于10^10的整数n\n");
  scanf("%d",&n);
 // printf("%d\n",n);
  k=is_int_pal(n);
  k++;
  if(k) printf("此数为回文数\n"); 
  else printf("此数不为回文数\n");
  return 0;
}
int is_int_pal(int n)
{
  int i=0,j,r;
  int str[MAX];
  while(n!=0)
  {
   r=n%10;
   str[i]=r;
   n/=10;
   i++;
  };
  
  for(j=0,i--;j<i;j++,i--)
  { if(str[j]!=str[i])
    return -1;};
  return 0;
}
