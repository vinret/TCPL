#include<stdio.h>
unsigned rightrot(unsigned int x,int n);
{
  int wordlength(void);
  int rbit;
  while (n-->0)
  {
      rbit = (x&1)<<(wordlength()-1);
      x =(x>>1)|rbit;
  }
  return x; 
}
int wordlength(void)
{
    int i;
    unsigned v =(unsigned)~0;
    
    for(i=1;(v=v>>1)>0;i++);
    return i;
}
int main()
{
    unsigned int x,result;
    int n;
    printf("x=,n=");
    scanf("%u%d",&x,n);
    result=rightrot(x,n);
    printf("result=rightrot(x,n)=%d\n",result);
  return 0;
}
~

