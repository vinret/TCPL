#include<stdio.h>
void print_hex(int a);
int main()
{
  int a;
  scanf("%d",&a);
  if(a<0)                /*zhu yi a<0*/
    printf("error");
  if(a!=0)
   print_hex(a);
   else printf("0\n");   /*dan du kao liu a=0*/
  return 0;
}
  
     
void print_hex(int a)
{
  int i=0;
  char c[11];
  for(i=0;a!=0;++i)
       {
           if(a%16>=0&&a%16<10)           
                  c[i]=(char)(a%16)+48;  /*ASCII zhuan huan*/
           else c[i]=(char)(a%16)+55;    /*ASCII zhuan huan*/
          a=a/16;
        }
       for(i;i>=0;--i)
           printf("%c",c[i]);            /*da yin shu*/
    printf("\n");
}               


